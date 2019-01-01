#pragma once
#include "pch.h"
#include "AirInfo.h"

class FileHandling
{
private:
	
public:
	std::vector<AirInfo> vDataInside; // TODO Put as private and reserve
	std::vector<AirInfo> vDataOutside; // TODO Put as private
	std::vector<AirInfo> vDataOutAvg; // TODO Put as private
	std::vector<AirInfo> vDataInAvg; // TODO Put as private
	
	
	FileHandling(std::string& filename);
	~FileHandling();


	// Methods
	static void printInfo(const std::vector<AirInfo>&);

	void avgInfo();
	
	// TODO Print temp/day humidity/day
	// shortening vectors, average values
	// TODO search average temp date


	// TODO Sort vectors inn and out
	// high to low humidity
	// high to low temp
	// high to low mold risk
	

};

