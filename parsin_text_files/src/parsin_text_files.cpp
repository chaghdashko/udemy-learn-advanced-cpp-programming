//============================================================================
// Name        : parsin_text_files.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string filename = "stats.txt";
	ifstream input;
	input.open(filename);

	if (!input.is_open()) {
		return 1;
	}

	while (!input.eof()) {
		string line;
		getline(input, line, ':');

		int population;
		input >> population;

		input >> ws; // c++11: ignores all following whitespace characters

		cout << "'" << line << "'";
		cout << " -- " << "'" << population << "'" << endl;
	}

	input.close();

	return 0;
}
