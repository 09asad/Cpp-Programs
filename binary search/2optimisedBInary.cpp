#include<iostream>        // LeetCode 704
using namespace std;
int main(){
    int arr[] = {-1,0,3,5,9,12};
    int n = 6;
    int target = 9;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            cout<<"Target found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
}