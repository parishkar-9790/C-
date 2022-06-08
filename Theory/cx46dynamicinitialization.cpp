#include <bits/stdc++.h>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    bankdeposit()
    {
    }
    bankdeposit(int p, int y, float r)
    {
    }
    bankdeposit(int p, int y, int r)
    {
    }
} bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    for (int  i = 0; i < y; i++)
    {
        returnValue=returnValue*(1+r);
    }
    
}
int main()
{

    return 0;
}