// Author: PARISHKAR SINGH, C++ 2022 //
#include <X:\parishkar.hpp>
// #TODO: Figure out what to comment here. //
inline int product(int a, int b)
{
    // not to be used together
    
    static int c = 0;
    c++;
    return (a * b) + c;
}
int main()
{
    int a = 2, b = 3;
    // cin>>a>>b;
    auto t = 10;
    while (t--)
        cout << product(a, b) << endl;

    return 0;
}