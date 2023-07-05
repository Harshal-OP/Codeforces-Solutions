#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int height[n];
    int max = INT_MIN,min=INT_MAX;
    int index_min = -1,index_max = -1;
    for(int i=0;i<n;i++){
        cin>>height[i];
        if(height[i]>max){
            max = height[i];
            index_max = i;
        }
        if(height[i]<=min){
            min = height[i];
            index_min = i;
        }
    }

    cout<<index_max + (n - 1 - index_min) - (index_min < index_max ? 1 : 0) << endl;

}