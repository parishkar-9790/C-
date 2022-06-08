#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    bool myCompare(pairs<int, int> p1, pair<int, int>[2]) return p1.first < p2.first;
    // pair<int,char> p;
    // p.first=3;
    // p.second='f';
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<pair<int, int>> v;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        v.pushback(make_pair(arr[i], i));
    }
    sort(v.begin, v.end(), muCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << endl;
    }
    // pair<int,int> p;
    //     p.first=arr[i];
    //     p.second=i;
    //     p.pushback(v);
}