#include <bits/stdc++.h>
using namespace std;
class Test
{
public:
    void display()
    {
        cout << "Inside Base class" << endl;
    }
};
class subclass : public Test
{   public:
    void display()
    {
        cout << "Inside derived class" << endl;
    }
};
int main()
{
    Test t1;
    t1.display();//output Inside Base class

    subclass s1;
    s1.Test::display();//output Inside Base class

    subclass s2;
    s2.display();////output Inside derived class

    return 0;
}