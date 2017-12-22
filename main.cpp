#include <iostream>

#include "basic_exceptions.h"
#include "standard_exceptions.h"
#include "custom_exceptions.h"

using namespace std;

void call_basic_exceptions_can_go_wrong() {
	try {
		basic_exceptions_can_go_wrong();
	} catch (int e) {
		cerr << "Error: " << e << endl;
	} catch (const char* e) {
		cerr << "Error: " << e << endl;
	} catch (string& e) {
		cerr << "Error: " << e << endl;
	}
}

void call_std_ex_can_go_wrong() {
	try {
		std_ex_can_go_wrong cls;
	} catch (bad_alloc& e) {
		cerr << "Error: " << e.what() << endl;
	}
}

void call_custom_exception() {
	try {
		cus_ex_method();
	} catch (custom_exception& e) {
		cerr << "Error: " << e.what() << endl;
	}
}

int main(int argc, char **argv) {
	//call_basic_exceptions_can_go_wrong();
	//call_std_ex_can_go_wrong();
	call_custom_exception();

	return 0;
}
