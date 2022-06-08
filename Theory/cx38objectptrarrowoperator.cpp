#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "the imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr =new Complex;

    // (*ptr).setData(4,5);
    ptr->setData(4,5);
    // (*ptr).getData();
    ptr->getData();
    // array of objects

    Complex *ptr1 =new Complex[4];

    // (*ptr).setData(4,5);
    ptr1->setData(4,5);
    // (*ptr).getData();
    ptr1->getData();
    return 0;
}