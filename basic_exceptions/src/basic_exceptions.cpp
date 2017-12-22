//============================================================================
// Name        : basic_exceptions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void basic_exceptions_can_go_wrong() {
	bool error1 = false;
	bool error2 = false;
	bool error3 = true;

	if (error1)
		throw 7;
	if (error2)
		throw "An error occured";
	if (error3)
		throw string("An error of type 'std::string' occured");
}

int main() {
	try {
		basic_exceptions_can_go_wrong();
	} catch (int e) {
		cerr << "Error: " << e << endl;
	} catch (const char* e) {
		cerr << "Error: " << e << endl;
	} catch (string& e) {
		cerr << "Error: " << e << endl;
	}

	return 0;
}
