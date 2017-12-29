//============================================================================
// Name        : vectors_and_memory.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> numbers(0);
	size_t capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;

	for (int i = 0; i < 10000; i++) {
		numbers.push_back(i);

		if (numbers.capacity() != capacity) {
			capacity = numbers.capacity();
			cout << "i: " << i << ", Capacity: " << capacity << endl;
		}
	}

	numbers.clear();
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

	return 0;
}
