#include <iostream>

using namespace std;


template<typename T>
void print(T n)
{
    cout << "Template version: " << n << endl;
}

void print(int value)
{
    cout << "Non-template version: " << value << endl;
}

/*
 * Constructs T with the default value.
 */
template<typename T>
void show()
{
    cout << T() << endl;
}

int main()
{
    print<string>("Hello");
    print(5);
    print(3.5);

    show<double>();

    return 0;
}
