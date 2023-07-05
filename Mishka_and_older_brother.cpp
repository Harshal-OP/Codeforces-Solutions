#include <iostream>
using namespace std;

bool newYear(int *a,int *b){
    if(*a>*b){
        return false;
    }
    if(*b>=*a){
        *a*=3;
        *b*=2;
        return true;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int countYear=0;
    while(newYear(&a,&b)){
        countYear++;
    }
    cout<<countYear;
    
}