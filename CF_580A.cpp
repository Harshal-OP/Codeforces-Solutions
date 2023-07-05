#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    long int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int s = 0;
    int e = 0;
    //starting point
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
         if(a[s]<a[i]){
            s=i;
         }   
        }
    }
    for(int i=s;i<n-1;i++){
        if(a[i]<=a[i+1]){
            e=i;
        }
    }
    cout<<e-s+1;
}