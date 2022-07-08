// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
#include <stdio.h>
// #TODO: Figure out what to comment here. //
using namespace std;

int main()
{
    typedef double num[3];
    num array[5] = {1, 2, 3, 4, 5, 6};
    // printf("%u", sizeof(array));
    // printf(" %.2f", array[1][1]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}