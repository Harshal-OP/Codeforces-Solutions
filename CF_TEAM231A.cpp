#include <iostream>
using namespace std;

int main(){
    int n;
    int x,y,z,flag=0;
    cin>>n;
    while(n){
        cin>>x>>y>>z;
        if(x+y+z>=2)
            flag++;
        n--;
    }
    cout<<flag;
}