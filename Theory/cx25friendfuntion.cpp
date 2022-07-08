// Author: PARISHKAR SINGH, C++ 2022 //
#include <bits/stdc++.h>
// #TODO: Figure out what to comment here. //
using namespace std;

class dist
{
private:
    int meters;

public:
    dist()
    {
        meters = 0;
    }

    void displayData()
    {
        cout << "Meters value-> " << meters;
    }

    // signature OR prototype of the function
    friend void addValue(dist &d);
};

void addValue(dist &d)
{
    d.meters = d.meters + 5;
}

int main()
{
    dist m;
    addValue(m);
    m.displayData();
    return 0;
}