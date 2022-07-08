// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
// #TODO: Figure out what to comment here. //
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "copy constructor is called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for the object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(46);
    x.display();
    y.display();
    z.display();

    return 0;
}