// Author: PARISHKAR SINGH, C++ 2022 //
#include <X:\parishkar.hpp>
// #TODO: Figure out what to comment here. //
class Number
{
    int a;

public:
    Number(){}
    Number(int num)
    {
        a = num;
    }
    void display()
    {
        cout << "The number for the object is " << a << endl;
    }
};
int main()
{

    return 0;
}