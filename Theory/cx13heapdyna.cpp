#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
int main()
{
    int a = 10;
    int *p = new int();
    *p = 10;
    cout << *p << endl;
    delete (p);
    p = NULL;
    cout << *p << endl;

    return 0;
}