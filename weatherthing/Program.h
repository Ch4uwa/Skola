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
	std::vector<AvgInfo> vInAvg;
	std::vector<AvgInfo> vOutAvg;
public:
	FileIO();
	~FileIO() { LOG("FileIO dtor"); }

	// Methods
	void readFile(const std::string&);
	void avgValues(std::vector<Info>& fromV, std::vector<AvgInfo>& toV);
	bool findSubString(const std::string&, const std::string &);
	void printInsideV();
	void printOutsideV();
	void printOutAvgV();
	void printInAvgV();
	/*TODO parse input
	 Stringstream?
		Parse string
			put in container*/
};

// TODO info handling class
