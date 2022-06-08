#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string postfix(string s,int ns)
{
    stack<char> st;
    string res;
    for (int i = 0; i < ns; i++)
    {
        // if ((s[i] >= 'a' && s[i] <= 'z' )|| (s[i] = 'A' && s[i] == 'Z'))
        if(isalnum(s[i]))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin>>size;
        string xx;
        cin >> xx;
        // postfix(xx);
        cout << postfix(xx,size) << endl;
    }
    return 0;
}
