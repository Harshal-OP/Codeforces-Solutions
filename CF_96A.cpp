#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    bool ans= false;

    for(int i=0;i<s.size()-6 && s.size()>6;i++){
        if(s.substr(0+i,7)=="1111111" || s.substr(0+i,7)=="0000000"){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}