#include "FileHandling.h"



FileHandling::FileHandling(std::string& filename)
{
	std::string fileContent;
	std::ifstream inFile(filename);
	if (inFile.is_open())
	{
		// Reading file line by line and splitting it in 2 containers
		while (!getline(inFile, fileContent).eof())
		{
			// Check if line in doc contains substr Inne
			if (fileContent.find("Inne") != std::string::npos)
			{
				// send line in doc to constructor of Airinfo
				AirInfo info(fileContent);
				vDataInside.emplace_back(info);
			}
			// Check if line in doc contains substr Ute
			else if (fileContent.find("Ute") != std::string::npos)
			{
				// send line in doc to constructor of Airinfo
				AirInfo info(fileContent);
				vDataOutside.emplace_back(info);
			}
			else
			{
				std::cout << "Something is wrong\n";
			}

		}
	}
	inFile.close();
}

FileHandling::~FileHandling()
{
}