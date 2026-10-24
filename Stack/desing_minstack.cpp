#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class MinStack{
    stack<pair<int,int>>s; // val , minval
public:
    void push(int val){ //O(1)
        if(s.empty()){
          s.push({val,val});
        }else{
            int minval = min(val , s.top().second);
            s.push({val,minval});
        }
    }

    int pop(){ //O(1)
        s.pop();
    }

    int top(){ //O(1)
        return s.top().first;
    }
    int gitmin(){
        return s.top().second;
    }
    bool empty(){
        return s.size() == 0;
    }
};

int main(){
    MinStack s;
    s.push(10);
    s.push(-20);
    s.push(30);
    cout<< s.gitmin()<<endl;
    s.pop();
    cout<< s.gitmin()<<endl;
    while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
