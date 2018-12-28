#include "AirInfo.h"



AirInfo::AirInfo(std::string fileContent)
{
	std::istringstream airStream(fileContent);
	getline(airStream, this->date, ' ');
	getline(airStream, this->time, ';');
	getline(airStream, this->place, ';');
	getline(airStream, this->temp, ';');
	getline(airStream, this->humidity, ';');
}

AirInfo::~AirInfo()
{
}

void AirInfo::printInfo(std::vector<AirInfo>& a)
{
	for (auto& info : a)
	{
		std::cout << "Date: " << info.getDate() << "\n"
			<< "Time: " << info.getTime() << "\n"
			<< "Placement: " << info.getPlace() << "\n"
			<< "Temp: " << info.getTemp() << " Celsius\n"
			<< "Humidity: " << info.getHumidity() << "%\n";
		getchar();
	}
}

