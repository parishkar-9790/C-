#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> marks;
    marks["2.harry"] = 98;
    marks["3.hello"] = 78;
    marks["5.jack"] = 8;
    marks["4.rohan"] = 18;
    marks.insert({"1.parishkar",100});
    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        // cout<<(*itr).first<<" "<<(*itr).second<<endl;
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"the size is "<<marks.size()<<endl;
    cout<<"the size is "<<marks.max_size()<<endl;
    cout<<"the answer is zero if not empty and 1 if empty "<<marks.empty()<<endl;
    cout<<"the size is "<<marks.size()<<endl;
    return 0;
}