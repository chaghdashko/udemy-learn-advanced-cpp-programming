#include <iostream>
#include <string>

using namespace std;

void can_go_wrong() {
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

int main(int argc, char **argv) {
	try {
		can_go_wrong();
	} catch (int e) {
		cerr << "Error: " << e << endl;
	} catch (const char* e) {
		cerr << "Error: " << e << endl;
	} catch (string& e) {
		cerr << "Error: " << e << endl;
	}

	return 0;
}
