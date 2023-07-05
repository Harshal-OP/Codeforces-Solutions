#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int arr[26]={0};
    if(n>=26){
        for(int i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
            arr[s[i]-'a']++;
        }
        bool flag = false;
        for(int i=0;i<26;i++){
            if(arr[i]==0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    
    }
    else{
        cout<<"NO";
    }



}