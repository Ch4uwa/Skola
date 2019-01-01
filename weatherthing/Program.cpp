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
}

void FileIO::avgValues()
{
	int v{};

	do
	{
		while (vInside[v].getDate() == vInside[v + 1].getDate())
		{
			std::cout << vInside[v].getDate() << "\n";
			v++;
		}
		std::cin.get();
		v++;
	} while (v < vInside.size());


	//std::vector<Info>::iterator it;
	/*for (it = vInside.begin(); it < vInside.end(); ++it)
	{
		if ((*it).getDate() == (*(it + 1)).getDate())
		{
			std::cout << (*it).getDate() << "\n";
		}
	}*/
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
		std::cin.get();
	}
	std::cout << "\n" << countUte << "# Outside Sensor's\n";
}
