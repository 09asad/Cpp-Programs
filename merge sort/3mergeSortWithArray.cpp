#include<iostream>
using namespace std;
void merge(int a[], int n1, int b[], int n2, int res[]){ 
    int i=0;  // for a
    int j=0;  // for b
    int k=0;  // for res
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==n1){ 
        while(j<=n2-1){
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==n2){ 
        while(i<=n1-1){
            res[k]=a[i];
            i++;
            k++;
        }
    }
}
void mergeSort(int arr[], int n){
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    int a[n1],b[n2];
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[i+n1];
    }
    // recursion
    mergeSort(a,n1);
    mergeSort(b,n2);
    // merge
    merge(a,n1,b,n2,arr);
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}