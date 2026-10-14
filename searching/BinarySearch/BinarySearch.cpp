#include<iostream>
#include<vector>
// in binary search your data need to be sorted
using namespace std;

int main(){
    vector<int>BS = {1,2,3,4,5,8,9,10,11};
    int start = 0 , end = BS.size()-1 , mid , target;
    cout<<"element are : 1 2 3 4 5 8 9 10 11"<<endl;
    cout<<"enter target = ";
    cin>>target;
    while(start<=end){
        mid = (start+end)/2;
        if(BS[mid] == target){
           cout<<"found at index "<<mid; 
           return 0 ;
        }else if(target>BS[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    if(start > end){
        cout<<"not found  "<<target;
    }

}