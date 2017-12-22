//============================================================================
// Name        : writing_text_files.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

void write_with_ofstream(const string& filename) {
	ofstream out_file;
	out_file.open(filename);

	if (out_file.is_open()) {
		out_file << "Hello there" << endl;
		out_file << 123 << endl;
		out_file.close();
	} else {
		cerr << "Could not create file: " << filename << endl;
	}
}

void write_with_fstream(const string& filename) {
	fstream out_file;
	out_file.open(filename, ios::out);

	if (out_file.is_open()) {
		out_file << "Hello there" << endl;
		out_file << 456 << endl;
		out_file.close();
	} else {
		cerr << "Could not create file: " << filename << endl;
	}
}

int main() {
	string filename = "text.txt";

//	write_with_ofstream(filename);
	write_with_fstream(filename);

	return 0;
}
