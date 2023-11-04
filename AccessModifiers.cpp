#include<bits/stdc++.h>
using namespace std;
//Public
class Test{

 public:
 int a,b;
 void display()
 {
    cout<<"Sum: "<<a+b<<endl;
 }
};
//Private
class Test1{
 private:
 int a,b;
 public:

 void setName(int a1,int b1)
 {
    a=a1;
    b=b1;
 }

 void display()
 {
    cout<<"Sum: "<<a+b<<endl;
 }

};

//Protected
class Test2{
 protected:
 int a,b;
 public:

 void setName(int a1,int b1)
 {
    a=a1;
    b=b1;
 }

 void display()
 {
    cout<<"Sum: "<<a+b<<endl;
 }
 friend class F;
};

class F{
 public:

 void print1(Test1& t)
 {
    t.setName(50,50);
    t.display();
 }
};

int main()
{   Test t1;
    t1.a=5;
    t1.b=6;
    t1.display();

    Test1 t2;
    t2.setName(12,13);
    t2.display();

    F t3;
    t3.print1(t2);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Test
// {
//     protected:
//     int data=10;
   
// };
// class subclass:public Test
// {
//  int id=data;
//  public:
//  void display()
//  {
//    cout<<id;
//  }

// };
// int main()
// {   subclass s1;
//     s1.display();
//     return 0;
// }
