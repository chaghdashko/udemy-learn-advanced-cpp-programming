//============================================================================
// Name        : custom_exceptions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class custom_exception: public exception {
public:
	virtual const char* what() const noexcept {
		return "A custom exception occurred";
	}
};

void cus_ex_method() {
	throw custom_exception();
}

int main() {
	try {
		cus_ex_method();
	} catch (custom_exception& e) {
		cerr << "Error: " << e.what() << endl;
	}

	return 0;
}
