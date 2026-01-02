//vector function
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char>letter ;

    cout<<"befor push"<<endl;
    cout<<"size = "<<letter.size() << endl; //size

    // insert or push 
    letter.push_back('a'); // vecname.push_back(25);
    letter.push_back('d');
    letter.push_back('b');

    // delete or pop    
    letter.pop_back();

    for(char val : letter){
        cout<<val<<endl;
    }

    cout<<"front = "<<letter.front()<<endl;
    cout<<"back = "<<letter.back()<<endl;

    cout<<"at index = "<<letter.at(1) <<endl;

    cout<<"after push back:"<<endl;
    cout<<"size = "<<letter.size() << endl;
    return 0;
}