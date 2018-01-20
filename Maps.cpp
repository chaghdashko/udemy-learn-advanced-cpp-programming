#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> ages;
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;
    
    //ages.insert(pair<string, int>("Peter", 100));
    
    // If "Peter" exists, insert function doesn't work
    ages.insert(make_pair("Peter", 60));
    
    cout << ages["Raj"] << endl;
    
    // Directly checking for "ages[Raje]" in the map
    // adds "Raje" to the map with value "0". To avoid
    // this side effect, we use "ages.find() method."
    if (ages.find("Raje") != ages.end()) {
        cout << ages["Raje"] << endl;
    }
    
    map<string, int>::iterator it = ages.begin();
    for (; it != ages.end(); it++) {
        cout << it->first << ": " << it->second << endl;
    }
    it = ages.begin();
    for (; it != ages.end(); it++) {
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }
}



