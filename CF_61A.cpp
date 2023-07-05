#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main(){
    pair<string,string> n;
    cin>>n.first>>n.second;
    string ans;
    for(int i = 0 ; i<n.first.size();i++){
        if(n.first[i]==n.second[i]){
            ans.append("0");
        }
        else{
            ans.append("1");
        }
    }

    cout<<ans;
    
}