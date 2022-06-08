#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define n 20
class Queue
{
    ll *array;
    ll front;
    ll back;

public:
    Queue()
    {
        array = new ll[n];
        front = -1;
        back = 1;
    }
    void push(ll x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow" << endl;
            return;
        }
        back++;
        array[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "queue underflow" << endl;
            return;
        }
        front ++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            return -1;
        }
        return array[front];
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    return 0;
}