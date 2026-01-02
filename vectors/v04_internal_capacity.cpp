// know about internal capacity of vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;

    vec.push_back(10);
    vec.push_back(25);
    vec.push_back(45);

    cout<<"size = "<<vec.size()<<endl;
    cout<<"capacity = "<<vec.capacity()<<endl;

    return 0;
}