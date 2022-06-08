#include <bits/stdc++.h>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
    // function objects are function wrapped in a class so that it is available like an object
    int arr[] = {1, 3, 4, 12, 5, 7, 2, 54, 77};
    sort(arr, arr + 9);
    sort(arr, arr + 9,greater<int>());//this sorts the array in greatest to shortest
    // int i = 6;
    // while (i--)
    for (int i = 0; i < 9; i++)
        cout << arr[i] << endl;

    return 0;
}