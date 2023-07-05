#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string magnet[n];
    int group=1;
    for(int i=0;i<n;i++){
        cin>>magnet[i];
        if(i>=1){
            if(magnet[i]!=magnet[i-1]){
                group++;
            }
        }
    }
    cout<<group;


}