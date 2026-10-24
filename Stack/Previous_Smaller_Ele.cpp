#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//TC = SC =  O(N)
vector<int> Previous_Smaller_Ele(vector<int>&arr){
    vector<int>ans(arr.size(),0);
    stack<int>s;
    for(int i=0; i<arr.size(); i++){
        while(s.size()>0 && s.top() >= arr[i]){
            // invalid val 
            s.pop();   
        }
        if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = s.top();
        }
        s.push(arr[i]);
    }
    return ans;
}

int main(){
    vector<int> arr  = {3,1,0,8,6};
    vector<int> ans = Previous_Smaller_Ele(arr);

    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}