#include<iostream>
#include<string>
using namespace std;
void rev(string s){
    int st = 0,end = s.length()-1;
    while(st<end){
        swap(s[st],s[end]);
        st++,end--;
    }
    cout<<"ans:";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    cout<<"enter string :";   
    getline(cin,s);
    rev(s);
}