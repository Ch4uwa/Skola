#pragma once
#include "pch.h"

class Info
{
private:
	std::string date{};
	std::string time{};
	std::string place{};
	std::string temperature{};
	std::string humidity{};
public:
	Info(const std::string&);
	virtual ~Info();

	// Accessors
	inline const std::string& getDate()const { return this->date; }
	inline const std::string& getTemperature()const { return this->temperature; }
	inline const std::string& getHumidity()const { return this->humidity; }

	
	// Method
	std::string printInfo()const;

};

class AvgInfo
{
private:
	std::string date{};
	float avgTemperature{};
	float avgHumidity{};
public:
	AvgInfo(std::string&,float&,float&);
	~AvgInfo();


	std::string infoToString()const;
	// Accessor
	inline const float& getAvgTemperature()const { return this->avgTemperature; }
	inline const float& getAvgHumidity()const { return this->avgHumidity; }

	// Modifier
	void setAvgTemperature(float temp) { this->avgTemperature = temp; };
	void setAvgHumidity(float humid) { this->avgHumidity = humid; };
};