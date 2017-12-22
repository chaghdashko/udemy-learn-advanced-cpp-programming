#include <iostream>

using namespace std;

class custom_exception: public exception {
public:
	virtual const char* what() const noexcept {
		return "A custom exception occurred";
	}
};

void cus_ex_method();
