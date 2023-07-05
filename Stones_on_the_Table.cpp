#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    int flag=0;
    cin>>n;
    cin>>s;
    int i=0;
    if(n>=2){
        while(i!=n-1){
            if(s[i]==s[i+1]){
                flag++;
            }
            i++;
        }
    }
    cout<<flag;
}