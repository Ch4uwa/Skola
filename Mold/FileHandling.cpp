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

void FileHandling::printInfo(const std::vector<AirInfo>& vData)
{
	for (const auto& info : vData)
	{
		std::cout << "Placement: " << info.getPlace() << "\n"
			<< "Date: " << info.getDate() << " "
			<< "Time: " << info.getTime() << "\n"
			<< "Temp: " << info.getTemp() << " "
			<< "Humidity: " << info.getHumidity() << "%\n";
		getchar();
	}
}

// TODO Print function that prints average value's, place and date

void FileHandling::avgInfo()
{
	// TODO take temp and humidity value's of same date and divide by number of entries

}



FileHandling::~FileHandling()
{
}
