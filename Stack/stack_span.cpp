#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    // stack span
    vector<int> price = {100,80,60,70,60,75,85};
   
    //solution
    stack<int> s ;
    vector<int>ans(price.size(),0);
    for(int i=0; i<price.size(); i++){
        while(s.size() > 0 && price[s.top()] <= price[i]){
            s.pop();
        }
        if(s.empty()){
            ans[i] = i+1;
        }else{
            ans[i] = i-s.top(); // i-prevHigh
        }
        s.push(i);
    }

    // print ans
    for(int val : ans){
        cout<<val<<" ";
    }
    return 0;
}