// CPP STL DEQUE
#include <iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);
    cout << dq.front() <<" "<<dq.back();
    dq.pop_back();
    cout<<endl;
    cout << dq.front() <<" "<<dq.back();
    cout << endl;
    return 0;
}