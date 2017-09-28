#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
#include "main.h"

using namespace std;

class CSVIterator;

int main()
{
	std::ifstream       file("plop.csv");

	for (CSVIterator loop(file); loop != CSVIterator(); ++loop)
	{
		std::cout << "4th Element(" << (*loop)[3] << ")\n";
	}

	return 0;
}
