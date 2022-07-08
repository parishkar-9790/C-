// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i )
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    // overlading sustem operator
    Complex operator +(Complex c)
    {
        Complex temp ;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main()
{
    Complex c1(10, 5);
    Complex c2(20, 10);
    Complex c3;

    c3 = c1 + c2;
    c3.print();
    // int x = 5;
    // int y = 4;
    // int z = x + y;
    // cout << "z values: " << z << endl;
    return 0;
}