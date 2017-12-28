//============================================================================
// Name        : binary_files.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct person {
	char name[50];
	int age;
	double weight;
};
#pragma pack(pop)

int main() {
	string filename = "test.bin";

	//// Write binary file
	ofstream out;
	out.open(filename, ios::binary);

	if (out.is_open()) {
		person someone { "cagdas", 36, 77.4 };
		out.write(reinterpret_cast<char*>(&someone), sizeof(person));
		out.close();
	} else {
		cerr << "Could not create file: " << filename << endl;
	}

	//// Read binary file
	person someone_else { };
	ifstream in;
	in.open(filename, ios::binary);

	if (in.is_open()) {
		in.read(reinterpret_cast<char*>(&someone_else), sizeof(person));
		in.close();
	} else {
		cerr << "Could not create file: " << filename << endl;
	}

	cout << someone_else.name << ", " << someone_else.age << ", "
			<< someone_else.weight << endl;

	return 0;
}
