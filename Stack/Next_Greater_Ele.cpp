#include<iostream>
#include<stack>
#include<vector>
using namespace std;
//TC = SC =  O(N)
vector<int> Next_Greater_Ele(vector<int>&arr){
    vector<int>ans(arr.size(),0);
    stack<int>s;
    for(int i=arr.size()-1; i>=0; i--){
        while(s.size()>0 && s.top() <= arr[i]){
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
    vector<int> arr  = {6,8,0,1,3};
    vector<int> ansNGE = Next_Greater_Ele(arr);

    for(int val : ansNGE){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}