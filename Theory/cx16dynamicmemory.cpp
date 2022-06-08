#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
class node
{
public:
    int data;
    class node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
struct cust
{
    int p;
    cust(int q) : p(q) {}
};
int main()
{
    // int *p = NULL;
    // p = new int;
    // // or
    // int *q = new int;
    // int *p1 = new int(25);
    // cout << *p1 << endl;
    // node *singh = new node(10);
    int *p = NULL;
    p = new (nothrow) int;
    if (!p)
    {
        cout << "allocation of memory failed" << endl;
    }
    else
    {
        *p = 29;
        cout << "value of p: " << *p << endl;
    }
    float *r = new float(100.25);
    cout << "value of the float is " << *r << endl;
    int n = 5;
    int *q = new (nothrow) int[n];
    if (!q)
    {
        cout << "allocation of memory failed" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            q[i] = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
        cout << q[i] << " ";
    delete r;
    delete[] q;
    return 0;
}