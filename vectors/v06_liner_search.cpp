//liner search on vector
#include<iostream>
#include<vector>
using namespace std;

int liner_s(vector<int>&vec,int target){
    for(int i=0;i<vec.size() ;i++){
        if(vec[i]==target){
            cout<<"found at index "<<endl;
            return i;
        }
    }
    cout<<"Not found"<<endl;
    return -1;
   
}

int main(){
   vector<int>vec(5,0);
    int size=5,target;
    cout<<"enter element in vector"<<endl;
    for(int i = 0;i<5 ;i++){
        cin>>vec[i];
    }

    cout<<"enter target = "<<endl;
    cin>>target;

    cout<<liner_s(vec,target);
    return 0;
}