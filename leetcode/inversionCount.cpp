//optimal approch using mergesort
#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>&arr,int st,int mid ,int end){
    int i = st ,j = mid+1 , invcount = 0;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
            invcount += (mid-i+1);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = 0 ; i < temp.size();i++){
        arr[i+st] = temp[i];
    }
    return invcount;
}
int mergeSort(vector<int>&arr,int st,int end){
    if (st < end ){
        int mid = st + (end - st)/2;
        int leftCount = mergeSort(arr,st,mid); // left hlaf
        int rightCount = mergeSort(arr,mid+1,end); //righr hlaf

        int invCount = merge(arr,st,mid,end);
        return leftCount + rightCount + invCount;
    }
        return 0;
}
int main(){
    vector<int>arr = {6,3,5,2,7};
    int ans = mergeSort(arr,0,arr.size()-1);
    cout <<"inv count :"<< ans ;
    return 0;
}