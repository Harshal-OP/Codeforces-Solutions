#include<iostream>
using namespace std;
void findMaxPlayer(int arr[],int n,int k){
    while(arr[k]==arr[k+1]){
        k=k+1;
    }
    cout<<k+1;
}
void findMinPlayer(int arr[],int n,int k){
    while(arr[k]<=0){
        k--;
    }
    cout<<k+1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(arr[0]<=0){
        cout<<0;
    }
    else if(arr[k-1]<=0){
        findMinPlayer(arr,n,k-1);
    }
    else{
        findMaxPlayer(arr,n,k-1);
    }
    return 0;
}