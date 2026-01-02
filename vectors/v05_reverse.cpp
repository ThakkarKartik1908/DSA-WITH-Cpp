// reverse of vector
#include<iostream>
#include<vector>
using namespace std;

void rev(vector<int>&vec){
  int  start = 0 ,end =vec.size() -1;
  
  while(start<end){
    swap(vec[start],vec[end]);
    start++,end-- ;
  }

}
int main(){
    vector<int>vec(5,0);
    int size=5;
    cout<<"enter element in vector"<<endl;
    for(int i = 0;i<5 ;i++){
        cin>>vec[i];
    }

    cout<<"\nelement in vector"<<endl;

    for(int val :vec){
        cout<<val<<" ";
    }

    rev(vec);
    cout<<"\nreverse of vector:" <<endl;
     
    for(int val :vec){
        cout<<val<<" ";
    }
    return 0;
}