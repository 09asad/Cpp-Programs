#include<iostream>
#include<vector>
using namespace std;
void display(int arr[], int n, int idx){    // print array
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}
void display2(vector<int>&v, int idx){      // print vector
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display2(v,idx+1);
}
int main(){
    int arr[]={2,1,4,6,3,2,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    cout<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display2(v,0);
}