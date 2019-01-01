#pragma once
#include "pch.h"
#include "Info.h"

class Program
{
private:


public:
	Program();
	~Program();

	//TODO Main menu
	void mainMenu();
	//TODO input handling

};

class FileIO
{
private:
	int countInne{0};
	int countUte{0};
	std::vector<Info> vInside;
	std::vector<Info> vOutside;
	std::vector<Info> vInAvg;
	std::vector<Info> vOutAvg;
public:
	FileIO();
	~FileIO() { LOG("FileIO dtor"); }

	// Methods
	void readFile(const std::string&);
	void avgValues();
	bool findSubString(const std::string&, const std::string &);
	void printInsideV();
	void printOutsideV();
	/*TODO parse input
	 Stringstream?
		Parse string
			put in container*/
};

// TODO info handling class
