#include "FileHandling.h"



FileHandling::FileHandling(std::string& filename)
{
	std::string fileContent;
	std::ifstream inFile(filename);

	if (inFile.is_open())
	{
		while (!getline(inFile, fileContent).eof())
		{	
			int n = fileContent.find('Inne');
			if (n)
			{
				AirInfo info(fileContent);
				vData.emplace_back(info);
			}
			else
			{
				std::cout << "meee";
			}
		}
	}
	inFile.close();
}

FileHandling::~FileHandling()
{
}