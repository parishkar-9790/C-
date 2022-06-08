#include <bits/stdc++.h>
using namespace std;
#define ll long long
//dynamic programming 
ll factorial(ll a){
    if(a>=1)
    return a*factorial(a-1);
    else 
    return 1;
}
int main()
{
    ll a=5;
    cout<<factorial(a);
    
}