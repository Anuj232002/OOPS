#include <bits/stdc++.h>
using namespace std;
class Test
{
protected:
    int a = 10;
    int b = 20;

public:
    virtual void display();
};
class subclass : public Test
{

public:
    int z = a;
    int x = b;
    virtual void display()
    {
        cout << "Sum: " << x + z;
    }
};
int main()
{
    // Test t1;
    // t1.display();
    //by writing above code it will give error because we are using virtual function

    subclass s1;
    s1.display();
    return 0;
}