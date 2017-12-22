class std_ex_can_go_wrong {
public:
	std_ex_can_go_wrong() {
		char* buf = new char[999999999999999999999];
		delete[] buf;
	}
};
