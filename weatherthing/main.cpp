#include "pch.h"
#include <iostream>

#include "Program.h"



int main()
{
	FileIO file;
	file.readFile("TempFuktData2.csv");
	file.avgValues();
	//file.printInsideV();
	//file.printOutsideV();
	/*Program P;
	P.mainMenu();*/
	std::cin.get();
}