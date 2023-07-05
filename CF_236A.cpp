#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    set<char> user_name(s.begin(),s.end());

    if(user_name.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }    
    
}