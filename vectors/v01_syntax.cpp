//vectors basic
#include<iostream>
#include<vector> // need to include
using namespace std;

int main(){
    // vector<int>vec ; output 0

    vector<int>vec = {1,2,3};
    
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;

    vector<int>h(5,0);
    cout<<h[0]<<endl;
    cout<<h[1]<<endl;
    cout<<h[2]<<endl;
    cout<<h[3]<<endl;
    
    return 0;
}