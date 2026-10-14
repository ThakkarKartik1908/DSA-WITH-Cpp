#include<iostream>
#include<string>
using namespace std;

void user_input(){
    char st[12];
    cout<<"enter char:";
    cin.getline(st,12);
    for(char i : st){
        cout<<i ;
    }
}
void string_check(){ //string
    string s = "kartik thakkar";
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }cout<<endl;

}

int main(){
    char st[] = {'h','e','l','l','o'};
  /*  for(char i : st){
        cout<<i ;
    }
    cout<<endl;*/
  //  user_input();
    string_check();
}