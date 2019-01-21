#include <iostream>

using namespace std;

class A
{
public:
    friend ostream &operator<<(ostream &output, const A &a)
    {
        output << "This is class A";
        return output;
    }
};

class B:public A
{
public:
    friend ostream &operator<<(ostream &output, const B &b)
    {
        output << "This is class B";
        return output;
    }
};

template<typename T>
void print(T n)
{
    cout << n << endl;
}

int main()
{
    print<string>("Hello");
    print(5);
    print(3.5);

    A a;
    print(a);

    B b;
    print(b);

    A x = B();
    print(x);

    return 0;
}
