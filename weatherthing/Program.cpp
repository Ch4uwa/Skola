#include "Program.h"


Program::Program()
{
}


Program::~Program()
{
}

void Program::mainMenu()
{
	std::cout << "Menu\n"
		<< "1 Search\n"
		<< "2 Sort\n";


	/*switch (input)
	{
	case 1:
		std::cout << "Case 1\n";
		break;
	case 2:
		std::cout << "Case 2\n";
		break;
	default:
		break;
	}*/
}



// Filehandling read and write
FileIO::FileIO()
{
	LOG("FileIO ctor");
	vInside.reserve(100000);
	vOutside.reserve(100000);
	vInAvg.reserve(365);
	vOutAvg.reserve(365);
}

void FileIO::readFile(const std::string & filename)
{
	std::ifstream inFile(filename);
	if (!inFile) // if file not open
	{
		std::cerr << "ERROR Opening the file <" << filename << ">\n";
	}
	// Read line by line
	std::string lineRead{};
	while (getline(inFile, lineRead))
	{
		if (findSubString(lineRead, "Inne"))
		{
			countInne++;
			Info info(lineRead);
			vInside.emplace_back(info);
		}
		else if (findSubString(lineRead, "Ute"))
		{
			countUte++;
			Info info(lineRead);
			vOutside.emplace_back(info);
		}
	}
	inFile.close();
	std::cout << "Done reading " << filename << " #" << countInne << " inside sensor's and #"
		<< countUte << " outside sensor's\n";
	avgValues(vInside, vInAvg);
	avgValues(vOutside, vOutAvg);
}

void FileIO::avgValues(std::vector<Info>& fromV, std::vector<AvgInfo>& toV)
{
	std::string someDate{ fromV[0].getDate() };
	float avgtemp{ 0 }, avghumid{ 0 };
	int count{ 0 }, v{ 0 }, j{ 0 };
	auto itr = fromV.begin();
	do
	{
		while ((*itr).getDate() == someDate)
		{
			avgtemp += stof((*itr).getTemperature());
			avghumid += stof((*itr).getHumidity());

			count++;
			itr++;
		}


		avgtemp = (avgtemp / count);
		avghumid = (avghumid / count);
		AvgInfo avginfo(someDate, avgtemp, avghumid);
		toV.emplace_back(avginfo);
		someDate = (*itr).getDate();
		avgtemp = 0;
		avghumid = 0;
		count = 0;
		

		
	} while (itr != fromV.end());
}


bool FileIO::findSubString(const std::string & findIn, const std::string & toFind)
{
	if (findIn.find(toFind) != std::string::npos)
	{
		return true;
	}

	return false;
}

void FileIO::printInsideV()
{
	for (const auto& n : vInside)
	{
		std::cout << n.printInfo();
	}
	std::cout << "\n" << countInne << "# Inside Sensor's\n";
}

void FileIO::printOutsideV()
{
	for (const auto& n : vOutside)
	{
		std::cout << n.printInfo();
		//std::cin.get();
	}
	std::cout << "\n" << countUte << "# Outside Sensor's\n";
}

void FileIO::printOutAvgV()
{
	for (const auto& n : vOutAvg)
	{
		std::cout << "Outside " << n.infoToString();
	}
}

void FileIO::printInAvgV()
{
	for (const auto& n : vInAvg)
	{
		std::cout << "Inside " << n.infoToString();
	}
}
