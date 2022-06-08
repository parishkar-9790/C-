#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
class employee
{
public:
    string name, department;
    int basicsal, gross;
    employee()
    {
        cout << "Enter the name of the employee" << endl;
        getline(cin, name);
        cout << "Enter the department of the employee" << endl;
        getline(cin, department);
        cout << "Enter the basic salary of the employee " << endl;
        cin >> basicsal;
    }
    int calgross()
    {
        return gross = (basicsal * .7) + (basicsal * .2) + (basicsal * .05);
    }
    void getdata()
    {
        cout << "the name of the employee is " << name << endl;
        cout << "the department of the employee is " << department << endl;
        cout << "the basic salary of the employee is " << basicsal << endl;
        cout << "the salary of the employee is " << calgross() << endl;
    }
};
int main()
{
    employee parishkar = *new employee();
    parishkar.getdata();
    return 0;
}