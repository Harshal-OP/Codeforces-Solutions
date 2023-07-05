#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; //n number of coins
    vector <int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end(),greater<int>());

    float sum=0;
    for(int i : a){
        sum+=i;
    }

    bool flag = false;
    int coin = 0;
    sum*=0.5;
    int current_sum = 0;
    for(int i=0;i<a.size();i++){
        current_sum+=a[i];
        ++coin;
        if(current_sum > sum){
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<coin;
    }
    else{
        cout<<n;
    }

}