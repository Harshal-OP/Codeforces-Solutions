#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        pair<long long,long long> x;
        cin>>x.first>>x.second;
        if(x.first%x.second==0){
            cout<<0<<endl;
        }
        else{
            long long temp = (x.first/x.second +1);
            temp = temp * x.second;
            cout<<temp-x.first<<endl;
        }
        t--;
    }

    return 0;
}