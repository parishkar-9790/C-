// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
// #TODO: Figure out what to comment here. //
using namespace std;

enum Covid_prevention
{
    Sanitzer = 1,
    Wear_mask = 2,
    Soc_distance = 4
};
int main()
{
    int a = 6, b = 4;
    cout << (a | b) << endl;

    int myCovidPrevention = Wear_mask | Soc_distance;
    printf("%d", myCovidPrevention);
    return 0;
}