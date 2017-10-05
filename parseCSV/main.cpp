#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <vector>
# include "parseCSV.h"

int main() 
{
	io::CSVReader<3> in("datareq.csv");
	in.read_header(io::ignore_extra_column, "vendor", "size", "speed");
	std::string vendor; int size; double speed;
	while (in.read_row(vendor, size, speed)) {
		// do stuff with the data
	}
}