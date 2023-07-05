#include <bits/stdc++.h>
using namespace std;
bool checkIndex(long long int usedIndex[],long long int n,long long int j){
    for(int i=0;i<n;i++){
        if(usedIndex[i]==j){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t){
        long long int n,k;
        cin>>n>>k;

        long long int a[n];
        long long int b[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        long long int ans[n];
        long long int usedIndex[n];

        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<n;j++){
                long long int diff = abs(a[i]-b[j]);
                if(diff<=k && checkIndex(usedIndex,n,j) ){
                    ans[i] = b[j];
                    usedIndex[i] = j;
                    continue;
                }
            }
        }
        t--;
        for(long long int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    }


    
}