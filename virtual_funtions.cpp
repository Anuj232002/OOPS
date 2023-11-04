#include <bits/stdc++.h>
using namespace std;
class Base
{   public:
    virtual void display()
    {
        cout << "Inside Base class" << endl;
    }
    void show()
    {
        cout<<"Show method in Base class"<<endl;
    }
    virtual void display1()
    {
        cout << "Inside Base class display1" << endl;
    }
};
class Child : public Base
{   public:
    void display()
    {
        cout << "Inside derived class" << endl;
    }
    void show()
    {
        cout<<"Show method in derived class"<<endl;
    }
};
int main()
{
    // Base b1;
    // b1.display();
    // Child c1;
    // c1.display();
    Base *b1;
    Child c1;
    b1=&c1;

    b1->display();//virtual function binded at runtime output:Inside derived class
    b1->show();
    b1->display1();
    
    return 0;
}