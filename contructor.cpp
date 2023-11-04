#include<bits/stdc++.h>
using namespace std;

class Test{
    public:
    int a=10;
    int b=6;
    Test()
    {
        cout<<"Inside default constructor"<<a+b<<endl;
    }
    Test(int c,int d)
    {
     cout<<"Inside parameterized constructor:"<<c+d<<endl;
    }
    ~Test()
    {
        cout<<"Contructor destroys";
    }

};

int main()
{   Test t1;
    Test t2(10,10);
    
    
    return 0;
}