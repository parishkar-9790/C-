// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define input(x) std::cin >> x
#define output(x) std::cout << x << std::endl
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //

int main()
{
    vector<int> v = {1, 4, 5, 2, 6, 3};
    // lambda function
    auto lam = [](int x)
    { return x + 2; };
    output(lam(2));
    // output(all_of(all(values), [](int x)
    //               { return x > 0; }););
    cout << all_of(v.begin(), v.end, [](int x)
                   { return x > 0; })
         << endl;
    return 0;
}