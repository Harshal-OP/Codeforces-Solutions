#include <iostream>
using namespace std;

int main(){
    int n;
    string s;

    cin>>n>>s;
    int A=0,D=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            A++;
        }
        else if(s[i]=='D'){
            D++;
        }
    }

    if(A==D){
        cout<<"Friendship";
    }
    if(A>D){
        cout<<"Anton";
    }
    if(A<D){
        cout<<"Danik";
    }
}