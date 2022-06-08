#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vx;
typedef vector<char> chvx;
typedef vector<long long> llvx;
#define all(v) v.begin(), v.end()
#define sorts(v) sort(all(v))
#define reverses(v) reverse(all(v))
void readarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void min(int a[], int key,int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i]<min)
        min=a[i];
        
    }
    cout<<"the min element of the array is "<<min<<endl;
}
int main()
{
    int n;
    cout << "Enter the size of the array to create" << endl;
    cin >> n;
    int *array = new int[n];
    readarray(array, n);
    cout << "Enter the number you want to find " << endl;
    int s;
    cin>>s;
    min(array,s,n);
    return 0;
}