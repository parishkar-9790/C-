// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define input(x) cin >> x
#define output(x) cout << x << endl
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //
class base
{
};
int main()
{
    auto x = 20;
    auto y = 20.213;
    auto z = new base();
    
    output(typeid(x).name());
    output(typeid(y).name());
    output(typeid(z).name());
    return 0;
}