// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
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
class Timer
{
public:
    std::chrono::time_point<std::chrono::system_clock> start, end;
    calctime(duration);
    Timer()
    {
        start = clktime();
    }
    ~Timer()
    {
        end = clktime();
        duration = end - start;
        auto tt = duration.count() * 1000.0f;
        cout << "timer Took: " << tt << "ms " << endl;
    }
};
void test()
{
    Timer started;
}
int main()
{

    return 0;
}