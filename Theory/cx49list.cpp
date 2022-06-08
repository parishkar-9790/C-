#include <bits/stdc++.h>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
        cout << *iter << endl;
    cout << endl;
}
void insert(list<int> &lst)
{
    list<int>::iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
        cin >> *iter;
    // *iter=1;
    cout << endl;
}
int main()
{
    list<int> list1;    // it creates list of zero length
    list<int> list2; // empty list of size 7
    // list<int> list2(3); // empty list of size 7 and element inside are zero
    
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);

    list2.push_back(7);
    list2.push_back(99);
    list2.push_back(51);
    list<int>::iterator iter;
    
    // iter=list1.end();
    // for(iter=list1.begin();iter!=list1.end();iter++)
    // }

    // list1.pop_front();//this removes the element from the front
    // list1.remove(99);//this removes element from the back
    // list1.pop_back // this removes element from the back
    
    // sorting the list
    // list1.sort();
    display(list1);
    // display(list2);
    // insert(list2);
    list1.merge(list2);//this is used to merge two list
    list1.sort();
    // reversing the list
    list1.reverse();
    display(list1);
    return 0;
}