#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
// c program to swap to value using call by refernce
void swap(int *a, int *b)
{
    int temp;
    *a = temp;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "the values before swap " << a << " " << b << endl;
    swap(a, b);
    cout << "the values after  swap " << a << " " << b << endl;

    return 0;
}