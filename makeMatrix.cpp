#include<iostream>
using namespace std;
int main (){
int row,col;

cout<<"Enter row :"<<"\n";
cin>>row;

cout<<"Enter colum :"<<"\n";
cin>>col;
int a[row][col];
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
cin>>a[i][j];
    }
}
cout<<"Entered numbers are :\n";
for(int i=0;i<row;i++){
for(int j=0;j<col;j++){
cout<<a[i][j]<<" ";
}
cout<<"\n";
}
return 0;
}