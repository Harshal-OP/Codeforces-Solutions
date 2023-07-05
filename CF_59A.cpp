#include <iostream>
using namespace std;
pair<int,int> countCase(string s){
    pair <int, int> count(0,0);
    for(int i=0;i<s.size();i++){
        if(s[i]<=90){
            count.second++;
        }
        if(s[i]>=97){
            count.first++;
        }
    }
    return count;
}
void convertLowerCase(string s){
    
    for(int i=0;i<s.size();i++){
        if(s[i]<=90){
            s[i]+=32;
        }
    }
    cout<<s;
}
void convertUpperCase(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]>=97){
            s[i]-=32;
        }
    }
    cout<<s;
}
int main(){
    string s;
    cin>>s;
    pair <int,int> count = countCase(s);
    if(count.first >= count.second){
        convertLowerCase(s);
    }
    else{
        convertUpperCase(s);
    }
    
}