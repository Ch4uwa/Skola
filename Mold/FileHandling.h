#pragma once
#include "pch.h"
#include "AirInfo.h"

class FileHandling
{
private:
public:
	std::vector<AirInfo> vData; // TODO Put as private
	FileHandling(std::string& filename);
	~FileHandling();

};

