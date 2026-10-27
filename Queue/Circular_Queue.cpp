#include <iostream>
using namespace std;

class CircularQueue
{
    int *arr;
    int currsize, cap;
    int f, r;

public:
    CircularQueue(int size)
    {
        cap = size;
        currsize = 0;
        arr = new int[cap];
        f = 0;
        r = -1;
    }
    void push(int data)
    { // O(1)
        if (currsize == cap)
        {
            cout << "CQ is FULL...." << endl;
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currsize++;
    }
    void pop()
    { // O(1)
        if (empty())
        {
            cout << "CQ is EMPTY...." << endl;
            return;
        }
        f = (f + 1) % cap;
        currsize--;
    }
    int front()
    { // O(1)
        if (empty())
        {
            cout << "CQ is EMPTY...." << endl;
            return -1;
        }
        return arr[f];
    }
    bool empty()
    { // O(1)
        return currsize == 0;
    }

    void printArr()
    {
        for (int i = 0; i < cap; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    CircularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);
    cq.printArr();
    cout << endl;
    while (!cq.empty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;
    return 0;
}