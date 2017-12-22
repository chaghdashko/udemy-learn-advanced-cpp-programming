//============================================================================
// Name        : catching_subclass_exceptions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void goes_wrong() {
	bool error1 = true;
	bool error2 = false;

	if (error1)
		throw bad_alloc(); // we're throwing this

	if (error2)
		throw exception();
}

int main() {
	try {
		goes_wrong();
	} catch (exception& e) {
		/*
		 * We're throwing bad_alloc in goes_wrong() function. But, as
		 * it's a subclass of 'exception', by catching 'exception' first,
		 * we're executing this first exception handler. Here, 'e.what()'
		 * method call executes bad_alloc's method due to runtime polymorphism.
		 *
		 * GOTCHA: Always catch subclass exceptions first. Otherwise, they
		 * cannot be catched.
		 */
		cerr << "Catching exception: " << e.what() << endl;
	} catch (bad_alloc& e) {
		cerr << "Catching bad_alloc: " << e.what() << endl;
	}

	return 0;
}
