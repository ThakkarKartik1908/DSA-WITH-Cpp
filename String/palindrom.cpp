// madam  racecar it reverse same as it is origenal leetcode 125
#include<iostream>
#include<string>

bool AlphNum(char ch){
    if((ch>=0 && ch<=9) || (tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}
using namespace std;
bool palindrome(){
    string s = "smadams"; // alphanumaric
    int st=0 ,n=s.length(),end=n-1;
    while(st < end){
        if(!AlphNum(s[st])){
            st++;continue;
        }
        if(!AlphNum(s[end])){
            end--;continue;
        }
        if(tolower(s[st])!=tolower(s[end])){
           return false;
        }
        st++,end--;
    }
        return true;
}
int main(){
    bool ans ;
    ans = palindrome();
    if(ans){
       cout<< "yes palinedrome"<<endl;
    }else{
        cout<<"not palindrome";
    }
}