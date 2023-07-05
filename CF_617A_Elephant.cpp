#include <iostream>
using namespace std;

int main(){
    long int x = 0;
    cin>>x;
    int steps = 0;

    if(x>5){
        steps+=(x/5);
        x = x - (steps*5);
        if(1<=x && x<=5){
            steps++;
        } 
    }
    else{
        steps++;
    }
    cout<<steps;
}