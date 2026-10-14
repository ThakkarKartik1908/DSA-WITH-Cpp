// leetcode 136  find uniqe in liner(one loop) also cont space
#include<iostream>
#include<vector>
using namespace std;

int uniqe_number(vector<int>& vec){
    int ans = 0 , n = vec.size();
    
    for(int val : vec){
        ans = ans^val;
    }
    return ans;
}
int main(){
    vector<int>vec = {2,4,2,4,1};
    cout<<"the uniqe element in the array = "<< uniqe_number(vec);
    return 0;
}