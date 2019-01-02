#pragma once
#include "pch.h"

class Info
{
private:
	std::string date{};
	std::string time{};
	std::string place{};
	float avgTemperature{};
	std::string temperature{};
	float avgHumidity{};
	std::string humidity{};
public:
	Info(const std::string&);
	~Info();

	// Accessors
	inline const std::string& getDate()const { return this->date; }
	inline const std::string& getTemperature()const { return this->temperature; }
	inline const std::string& getHumidity()const { return this->humidity; }

	void setAvgTemperature(float temp) { this->avgTemperature = temp; };
	void setAvgHumidity(float humid) { this->avgHumidity = humid; };
	// Method
	std::string printInfo()const;

};