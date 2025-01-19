#include<iostream>              // LeetCode 1480
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    cout<<"Prefix Sum of array is ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}