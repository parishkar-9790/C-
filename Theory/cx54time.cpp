// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define var auto
#define clktime() chrono::high_resolution_clock::now()
#define calctime(x) chrono::duration<float> x
#define input(x) std::cin >> x
#define output(x) std::cout << x << std::endl
#define fastoutput(x) printf(x)
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //

int main()
{
    var start = clktime();
    var t = 10000;
    while (t--)
        output("Print");
    // printf("print\n");
    var end = clktime();
    calctime(x) = end - start;
    output(x.count());

    return 0;
}