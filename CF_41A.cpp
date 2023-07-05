#include <iostream>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s>>t;
    bool flag = true;
    if(s.size()==t.size()){
        int i = 0;
        int j = s.size()-1;
        while(j>=0){
            if(int(s[i])!=int(t[j])){
                flag = false;
                break;
            }
            i++;
            j--;
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