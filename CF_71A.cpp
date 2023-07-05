//Way Too Long Words

#include<iostream>
using namespace std;
int main(){
    string x;
    int n;
    cin>>n;
    while(n){
        cin>>x;
        int len=x.length();
        if(len>10){
            string lenbtwn = to_string(len-2);
            cout<<x[0]+lenbtwn+x[len-1]<<endl;
        }
        else{
            cout<<x<<endl;
        }
        n--;
    }
    return 0;
}