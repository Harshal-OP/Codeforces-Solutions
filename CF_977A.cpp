#include <iostream>
using namespace std;

int main(){
    long long int n; //user number
    short int k; //subtract number k times
    cin>>n>>k;
    while(k){
        if(n%10==0){
            n/=10;
        }
        else{
            --n;
        }
        --k;
    }
    cout<<n;
}