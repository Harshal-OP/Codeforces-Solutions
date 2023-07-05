#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int givers[n];
    int receivers[n];


    for(int i=0;i<n;i++){
        cin>>givers[i];
    }

    for(int i=0;i<n;i++){
        int value = i+1;
        int position = givers[i] - 1;

        receivers[position] = value;
    }

    for(const int &i : receivers) cout<<i<<" ";
}