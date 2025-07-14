#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr,int tar){
    int st=0,end=arr.size()-1;

    while (st<=end)
    {
       int mid=(st+end)/2;
       if(tar>arr[mid]){
        st=mid+1;
       }else if(tar<arr[mid]){
        end=mid-1;
       }else{
        return mid;
       }
    }
    return -1;
}

int main(){
    vector<int>arr={0,1,2,3,4,5,6,7,8,9};
    int tar=5;
    cout<<binarySearch(arr,tar);
}