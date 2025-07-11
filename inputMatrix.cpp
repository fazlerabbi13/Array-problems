#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row;
    cin>>col;
    int mat1[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}