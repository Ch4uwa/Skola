#include "FileHandling.h"



FileHandling::FileHandling(std::string& filename)
{
	std::string fileContent;
	std::ifstream inFile(filename);
	if (inFile.is_open())
	{
		while (!inFile.eof())
		{
			getline(inFile, fileContent);

			AirInfo info(fileContent);
			vData.emplace_back(info);
		}
	}
	inFile.close();
}

FileHandling::~FileHandling()
{
}