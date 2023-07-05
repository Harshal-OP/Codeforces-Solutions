#include<iostream>
using namespace std;
int main(){
    int mtx[5][5];
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mtx[i][j];
            if(mtx[i][j]==1){
                row=i,col=j;
            }
        }
        cout<<endl;
    }

    //row movement:
    row=row-2;
    if(row<0){
        row=-row;
    }
    //column movement
    col=col-2;
    if(col<0){
        col=-col;
    }
    cout<<row+col;
    return 0;
}