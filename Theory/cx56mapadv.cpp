// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
typedef pair<int, int> intp;
typedef map<int, int> maps;
#define iterate ::iterator
#define var auto
#define clktime() chrono::high_resolution_clock::now()
#define sysclock std::chrono::time_point<std::chrono::system_clock>
#define calctime(x) chrono::duration<float> x
#define fastoutput(x) printf(x)
#define input(x) std::cin >> x
#define output(x) std::cout << x << std::endl
#define calcsize(x) sizeof(x) / sizeof(x[0])
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
#define fx(i, x, n) for (long long i = x; i < n; i++)
// #TODO: Figure out what to comment here. //
// maps
int main()
{
    maps hey;
    maps iterate itr;
    hey.insert(intp(1, 30));
    hey.insert(intp(2, 1230));
    hey.insert(intp(7, 324));
    hey.insert(intp(4, 2340));
    // printing
    for (itr = hey.begin(); itr != hey.end(); itr++)
    {
        cout << "\t" << itr->first << "\t" << itr->second << endl;
    }

    return 0;
}