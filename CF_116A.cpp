#include <iostream>
using namespace std;

int main(){
    short n;
    cin>>n;
    short a,b;
    int current_passengers = 0;
    int max_passengers = 0;
    while(n){
        cin>>a>>b;
        current_passengers = current_passengers + (-a+b);
        if(max_passengers < current_passengers ){
            max_passengers = current_passengers;
        }
        n--;
    }
    cout<<max_passengers;
}