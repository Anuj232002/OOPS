#include<bits/stdc++.h>
using namespace std;

class Test
{
 public:
 void display(int a)
 {
  cout<<"Integer value: "<<a<<endl;
 }
 void display(double x)
 {
  cout<<"Double value: "<<x<<endl;
 }
 void display(int a,int b)
 {
  cout<<"Sum: "<<a+b<<endl;
 }
};
int main()
{   Test t1;
    t1.display(40);
    t1.display(40.6);
    t1.display(40,80);

    return 0;
}