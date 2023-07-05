#include<iostream>
using namespace std;
int main(){
    short n,h; //number of friends and height of fence
    cin>>n>>h;

    int min_width_road = 0;
    for(short i = 0 ; i<n; i++){
        int temp;
        cin>>temp;
        if(temp>h){
            min_width_road+=2;
        }
        else{
            min_width_road++;
        }
    }
    cout<<min_width_road;
    return 0;
}