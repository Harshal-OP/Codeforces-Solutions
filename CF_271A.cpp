#include <iostream>
using namespace std;
bool checkDistinct(short year){
    short a[4]={-1};
    short flag = 0;
    for(int i=0;i<4;i++){
        a[i] = year % 10;
        year/=10;
    }

    //check distinct or not
    
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]==a[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    short y;
    cin>>y;
    
    for(short i=y+1;i<=9012;i++){
        if(checkDistinct(i)){
            cout<<i;
            break;
        }  
    }

    return 0;
}