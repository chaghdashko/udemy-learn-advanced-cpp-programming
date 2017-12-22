//============================================================================
// Name        : standard_exceptions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class std_ex_can_go_wrong {
public:
	std_ex_can_go_wrong() {
		char* buf = new char[999999999999999999999];
		delete[] buf;
	}
};

int main() {
	try {
		std_ex_can_go_wrong cls;
	} catch (bad_alloc& e) {
		cerr << "Error: " << e.what() << endl;
	}

	return 0;
}
