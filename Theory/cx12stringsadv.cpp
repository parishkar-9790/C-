#include <bits/stdc++.h>
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
    string str = "parishkar singh";

    cout << str.size() << endl;
    //  manual method
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    // function method to convert string
    transform(all(str), str.begin(), ::toupper);
    transform(all(str), str.begin(), ::tolower);
    cout << str << endl;
    string s = "896251";
    sort(s.begin(), s.end(), greater<int>());
    cout << s << endl;
    string s2 = "parishkarsinghxxxx";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        freq[s2[i] - 'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    // sort(freq, freq + 26);
    // cout << freq[26] << endl;
    string pari="parishkarsingh";
    string new =pari.substr(1,3);
    return 0;
}