#include <bits/stdc++.h>
using namespace std;

class Test
{
private:
    string name;
    int id;

public:
    // Test(string s, int i)
    // {
    //     this->name = s;
    //     this->id = i;
    // }
    void setName(string s)
    {
        this->name = s;
    }
    string getName()
    {
        return name;
    }
    void setId(int i)
    {
        this->id = i;
    }
    int getId()
    {
        return id;
    }
};

int main()
{
    Test t1;
    // Test t1("Anuj", 1);
    // cout << "Name: " << t1.getName() << endl;
    // cout << "ID: " << t1.getId() << endl;

    t1.setName("Jhon Snow");
    t1.setId(2);

    cout << "Name: " << t1.getName() << endl;
    cout << "ID: " << t1.getId() << endl;

    return 0;
}