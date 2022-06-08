#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
int main()
{
    // this is all about strings
    string str;
    // cin >> str;
    getline(cin, str);
    cout << str << endl;
    // creating string with linear words
    string str1(5, 'n'); // only single word works
    // cout << str1 << endl;
    // cin >> str;
    // cout << str << endl;
    // adding two stringgs using operator overloading
    string s1 = "fam";
    string s2 = "ily";
    str = s1 + s2;
    // use to clear a string variable
    str.clear();
    cout << str << endl;

    // string comparison
    string s7 = "abc";
    string s8 = "xyx";
    if (!s7.compare(s8))
    {
        cout << "strings are equal" << endl;
    }
    else
        cout << "strings are not equal" << endl;
    //  adding thing to the string and erase
    string s3 = "parishkar";
    cout << s3.find("kar") << endl;
    s3.erase(3, 3);
    cout << s3 << endl;

    // string to interger
    string s4 = "786";
    int ss = 789;
    string s5 = to_string(ss);
    int x = stoi(s4);
    cout << x + 2 << endl;
    cout << ss << endl;
    //  sorting a string
    string s6 = "parishkarsingh ";
    sorts(s6);
    cout << s6 << endl;
    
    return 0;
}