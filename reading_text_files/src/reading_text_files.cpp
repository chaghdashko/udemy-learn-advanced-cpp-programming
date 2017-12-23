//============================================================================
// Name        : reading_text_files.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void read_with_ifstream(const string& filename) {
	ifstream infile;
	infile.open(filename);

	if (infile.is_open()) {
		string line;

		while (!infile.eof()) {
			getline(infile, line);
			cout << line << endl;
		}

		infile.close();
	} else {
		cerr << "Cannot open file: " << filename << endl;
	}
}

void read_with_fstream(const string& filename) {
	fstream infile;
	infile.open(filename, ios::in);

	if (infile.is_open()) {
		string line;

		while (!infile.eof()) {
			getline(infile, line);
			cout << line << endl;
		}

		infile.close();
	} else {
		cerr << "Cannot open file: " << filename << endl;
	}
}

int main() {
	string filename = "test.txt";

	read_with_ifstream(filename);
	read_with_fstream(filename);

	return 0;
}
