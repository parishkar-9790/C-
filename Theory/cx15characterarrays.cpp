#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
// character array instead of doing a[n] do a[n+1] this is absorb the /0
int main()
{
    // char arr[200] = "parishkar singh";
    // int i = 0;
    // while (arr[i] != '\0')
    // {
    //     cout << arr[i] << " ";
    //     i++;
    // }
    //  2nd impliment
    // char arr[9];
    // cin >> arr;
    // cout << arr;
    //  check palindrome
    // char *arr;
    // cin >> arr;
    // int size = strlen(arr);
    // bool ans=1;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] != arr[size - i - 1])
    //     {
    //         ans = 0;
    //         break;
    //     }
    // }
    // if (ans == true)
    // {
    //     cout << "The string is palindrome"
    //          << "\n";
    // }
    // else
    //     cout << "The string is not palindrome "
    //          << "\n";
    //      largest word in the sentence
    // char arr[200];
    // cin >> arr;
    // // cin.getline(arr,strlen(arr));
    // int i = 0, count = 0, adress = 0;
    // int max = 0;
    // while (arr[i] != '\0')
    // {
    //     if (arr[i] = ' ')
    //     {
    //         if (max < count)
    //         {
    //             max = count;
    //             adress = i;
    //         }
    //         count = 0;
    //     }
    //     count++;
    //     i++;
    // }=
    // string word;
    // for (int i = adress; i >= 0; i++)
    // {
    //     word = arr[i];
    // }
    // cout << "the maximum lenght of the word is " << max << "the word is" << word << endl;
    // implimentaion 2
    int n;
    cin >> n;
    cin.ignore(); // used to clear buffer
    char arr[n + 1];

    cin.getline(arr, n);
    cin.ignore();
    int i = 0;
    int currlen = 0, maxlen = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
            if
            {
            }
        if (arr[i] == '\0')
            break;
        i++;
    }
    return 0;
}