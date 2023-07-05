#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cnt = 0;
    string sets ="";
    getline(cin,sets);
    
    vector<bool> unique(26,true);

    for(int i=1;i<sets.size()-1;i+=3){
        int index = sets[i] - 'a';
        if(unique[index]){
            unique[index] = false;
            cnt++;
        }
    }

    cout<<cnt;    
}