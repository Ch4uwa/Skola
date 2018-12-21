#include "pch.h"
#include "FileHandling.h"

#include "AirInfo.h"



void printInfo(AirInfo& airinfo)
{
	std::cout << "Date: " << airinfo.getDate() << "\n";
	std::cout << "Time: " << airinfo.getTime() << "\n";
	std::cout << "Placement: " << airinfo.getPlace() << "\n";
	std::cout << "Temp: " << airinfo.getTemp() << " Celsius\n";
	std::cout << "Humidity: " << airinfo.getHumidity() << "%\n";
}

int main()
{
	std::string filename{"TempFuktData2.csv"};
	FileHandling F(filename);
	for (auto& info : F.vData)
	{
		printInfo(info);
		std::cin.get();
	}

	std::cin.get();
}