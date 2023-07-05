#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int problemSolved = 0;
   

    for(int i = 1; i<=n ; i++){
        if(k+5*(i*(i+1)/2)<=240){
            problemSolved++;
        }
    }
    cout<<problemSolved;

}