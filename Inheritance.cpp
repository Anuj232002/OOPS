#include <bits/stdc++.h>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Inside Base class:" << endl;
    }
    void display()
    {
        cout << "Display method insidde Base class" << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Inside Derived class:" << endl;
    }
    void display1()
    {
        cout << "Display1 method insidde Base class" << endl;
    }
};
int main()
{
    Base b1;
    b1.show(); // output Inside Base class:

    Derived d1;
    d1.show(); // output Inside Derived class:

    d1.display(); // output Display method insidde Base class
    return 0;
}