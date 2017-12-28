//============================================================================
// Name        : vectors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (size_t i = 0; i < strings.size(); ++i) {
		cout << strings[i] << endl;
	}

	for (vector<string>::iterator it = strings.begin(); it != strings.end();
			it++) {
		cout << *it << endl;
	}

	return 0;
}
