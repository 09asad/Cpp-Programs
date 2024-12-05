#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[], int n, int idx, int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    printMax(arr,n,idx+1,max);
}
int maxInArray(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr,n,idx+1));
}
int main(){
    int arr[]={2,3,54,1,37,98,23,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    // printMax(arr,n,0,INT_MIN);    // calling with 4 parameters
    cout<<maxInArray(arr,n,0);     // calling with only 3 parameters
}