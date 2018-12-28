#pragma once
#include "pch.h"
#include "AirInfo.h"

class FileHandling
{
private:
public:
	std::vector<AirInfo> vDataInside; // TODO Put as private
	std::vector<AirInfo> vDataOutside; // TODO Put as private
	FileHandling(std::string& filename);
	~FileHandling();

};

