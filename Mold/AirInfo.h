#pragma once
#include "pch.h"

class AirInfo
{
private:
	std::string temp;
	std::string humidity;
	std::string time;
	std::string place;
	std::string date;
public:
	AirInfo(std::string fileContent);
	~AirInfo();

	// Methods
	//TODO void printInfo();


	// Accessors
	inline std::string getTemp()const { return this->temp; }
	inline std::string getHumidity()const { return this->humidity; }
	inline std::string getTime()const { return this->time; }
	inline std::string getPlace()const { return this->place; }
	inline std::string getDate()const { return this->date; }


};

