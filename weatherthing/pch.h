#pragma once
#include <string>
#include <limits>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <sstream>

#if true
#define LOG(x) std::cout << x << "\n";
#else
#define LOG(x)
#endif // true
