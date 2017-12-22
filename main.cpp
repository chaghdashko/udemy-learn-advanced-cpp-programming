#include <iostream>

#include "functions.h"

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

int main(int argc, char **argv) {
	call_basic_exceptions_can_go_wrong();

	return 0;
}
