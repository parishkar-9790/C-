#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
void area(int h, int b)
{
    cout << "the area of the rectangle is " << h * b << endl;
}
void area(int r)
{
    cout << "The area of the circle is " << 2 * 3.13 * r << endl;
}
void area(int s1, int s2, int s3)
{
    float s = (s1 + s2 + s3) / 2;
    s = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    cout << "the area of the triangle is " << s << endl;
}
int main()
{
    int l, b, h, r;
    area(10,20);
    area(10);
    area(3,4,5);
    return 0;
}