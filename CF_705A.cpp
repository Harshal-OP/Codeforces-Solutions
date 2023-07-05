#include <iostream>
#include <string>
using namespace std;

int main(){
    short n;
    cin>>n;

    string hate = "I hate";
    string love = "I love";
    string ans="";
    for(int i=1;i<=n;i++){
        if(i%2){
            ans.append(hate);
        }
        else{
            ans.append(love);
        }
        if(i==n){
            ans.append(" it");
        }
        else{
            ans.append(" that");
        }
        if(i!=n){
            ans.append(" ");
        }

    }

    cout<<ans;
    return 0;
}