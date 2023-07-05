#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long shoes[4]={0};
    for(int i=0;i<4;i++){
        cin>>shoes[i];
    }
    

    sort(shoes,shoes+4);
    
    int min_buys = 0;
    for(int i=0;i<3;i++){
        if(shoes[i]==shoes[i+1]){
            min_buys++;
        }
    }
    cout<<min_buys;
    return 0;
}