#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int target=5;
    int size = sizeof(arr) / sizeof(arr[0]);
    bool found=false;
    for(int i=0;i<size;i++){
        if (arr[i]==target)
        {
            cout<<i;
            found=true;
            break;
        }
        
    }

    if (!found){
        cout<<"element not found";
    }
    
    return 0;
}