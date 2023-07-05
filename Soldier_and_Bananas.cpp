#include <iostream>
using namespace std;

int main(){
    int k;     //price of banana
    short int w; //number  of banana soilder wants to buy
    long long int n; //initial dollars he has already
    cin>>k>>n>>w;
    long long int borrow = 0;
    
    //calculate overall price of banana purchase
    borrow = w * (w+1) / 2 * k;

    if(n>=borrow){
        cout<<0;
    }
    else{
        borrow = borrow - n;
        cout<<borrow;
    } 
}