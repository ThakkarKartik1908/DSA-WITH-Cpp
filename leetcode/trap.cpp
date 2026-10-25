//optimal approch using prefix array TC = O(n) AND SC = O(n) optimal all using two pointer approch TC = O(n) AND SC = O(1) Q:42
#include<iostream>
#include<vector>
using namespace std;
int trap(vector<int>&heights){
    int n = heights.size();
    if(n == 0) return 0;
    
    vector<int> left(n);
    vector<int> right(n);
    
    left[0] = heights[0];
    for(int i = 1; i < n; i++){
        left[i] = max(left[i-1], heights[i]);
    }
    
    right[n-1] = heights[n-1];
    for(int i = n-2; i >= 0; i--){
        right[i] = max(right[i+1], heights[i]);
    }
    
    int trappedWater = 0;
    for(int i = 0; i < n; i++){
        trappedWater += min(left[i], right[i]) - heights[i];
    }
    
    return trappedWater;
}

int main(){
    vector<int>heights = {6,3,5,2,7};
    int ans = trap(heights);
    cout <<"trapped water :"<< ans ;
    return 0;
}