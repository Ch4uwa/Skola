#include "AirInfo.h"



AirInfo::AirInfo(std::string& fileContent)
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

float AirInfo::getAvgTemp() const
{
	return 0.0f;
}

float AirInfo::getAvgHumid() const
{
	return 0.0f;
}

