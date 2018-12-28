#include "pch.h"


#include "FileHandling.h"
#include "AirInfo.h"





int main()
{
	std::string filename{"TempFuktData2.csv"};
	FileHandling F(filename);
	//AirInfo::printInfo(F.vDataInside);
	AirInfo::printInfo(F.vDataOutside);
	

	
	std::cin.get();
}