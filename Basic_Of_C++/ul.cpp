// upper case and lower case

#include<iostream>
using namespace std;

int main(){
    char ch;
    
    cout<<"enter charecter:";
    cin>>ch;
    int value =ch;// type casting
    if(ch>='a'&& ch<='z'){ // use 97 ascii value
        cout<<"lowercase";
    }else if(ch>='A' && ch<='Z'){ // 65 to 90
        cout<<"uppercase";
    }
    cout<<"\nascii value= "<<value;
    return 0;
}