#include <iostream>
#include <string>

#include "functions.h"

using namespace std;

void basic_exceptions_can_go_wrong() {
	bool error1 = true;
	bool error2 = false;
	bool error3 = true;

	if (error1)
		throw 7;
	if (error2)
		throw "An error occured";
	if (error3)
		throw string("An error of type 'std::string' occured");
}
