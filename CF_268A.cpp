#include <iostream>
using namespace std;

int main(){
    short n;
    cin>>n;

    short home[n],away[n];

    for(short i = 0;i<n;i++){
        cin>>home[i];
        cin>>away[i];
    }

    short odd_events = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(home[i]==away[j]){
                odd_events++;
            }
        }
    }

    cout<<odd_events;

}