// the 2D vector have advantage to store diff size col
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>data = {{1,2},{3,4,5}} ;//2D
    for(int i=0;i<data.size();i++){
        for(int j=0;j<data[i].size();j++){
            cout<<data[i][j]<<" ";
        }
        cout<<"ColSize = "<<data[i].size();
        cout<<endl;
       
    }
    cout<<"RowSize = "<<data.size()<<endl;
    
}