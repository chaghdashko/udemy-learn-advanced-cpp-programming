#include <iostream>
#include <list>
using namespace std;

static void print_list(const list<int>& numbers) {
    cout << "{ ";
    for (auto i = numbers.begin(); i != numbers.end(); ++i) {
        if (i != numbers.begin()) {
            cout << ", ";
        }
        cout << *i;
    }
    cout << " }" << endl;
}

static list<int> create_list() {
    list<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);
    return numbers;
}

int main() {
    list<int> numbers = create_list();
    print_list(numbers);
    list<int>::iterator i = numbers.begin();
    for (; i != numbers.end();) {
        if (*i == 2) {
            numbers.insert(i, 1234);
        }
        if (*i == 1) {
            i = numbers.erase(i);
        } else {
            i++;
        }
    }
    print_list(numbers);
}



