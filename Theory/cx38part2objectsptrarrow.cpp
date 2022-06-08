#include <bits/stdc++.h>
using namespace std;
class shop
{
    int id;
    float price;

public:
    void setdata(float a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "Code of the item is " << id << endl;
        cout << "price of the item is " << price << endl;
    }
};

int main()
{
    int size=2;
    // cin>>size;
    // int *ptr=&size;
    // int *ptr =new int [34];
    shop *ptr=new shop[size];
}