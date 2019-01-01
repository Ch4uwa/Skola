#include "Info.h"

Info::Info(const std::string& lineRead)
{
	std::stringstream inStream(lineRead);
	getline(inStream, this->date, ' ');
	getline(inStream, this->time, ';');
	getline(inStream, this->place, ';');
	getline(inStream, this->temperature, ';');
	getline(inStream, this->humidity);
}

Info::~Info()
{
}

std::string Info::printInfo()const
{
	return "\nDate: " + this->date + " Time: " + this->time +
		" Placement: " + this->place + " Temp: " + this->temperature + " Humidity: " + this->humidity;
}
