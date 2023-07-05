#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    while(n){
        string x;
        cin>>x;
        if(x=="X++" || x=="++X")
            ans+=1;
        else{
            ans-=1;
        }
        n--;

    }
    cout<<ans;

    return 0;
}