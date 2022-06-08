#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // way one
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    // way two
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    // way three
    for (auto element : v)
    {
        cout << element << endl;
    }
    // v.pop_back();//1234
    // swaping two vectors
    vector<int> v2(3, 50); // 50 50 50
    swap(v, v2);           // swap values o v and vs
    for (auto element : v)
    {
        cout << element << endl;
    }
    for (auto element : v2)
    {
        cout << element << endl;
    }
    // sort(begin,end)
    sort(v.begin(), v.end());
    return 0;
}
