#include<iostream>
using namespace std;
int partition(int arr[], int startIdx, int endIdx){
    int pivotElement = arr[(startIdx + endIdx)/2];   
    int count=0;
    for(int i=startIdx;i<=endIdx;i++){
        if(i==(startIdx + endIdx)/2) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIndx = count + startIdx;
    swap(arr[(startIdx + endIdx)/2],arr[pivotIndx]);
    int i = startIdx;
    int j = endIdx;
    while(i<pivotIndx && j>pivotIndx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndx;
}
int kthSmallest(int arr[], int startIdx, int endIdx, int k){
    int pivotIdx = partition(arr,startIdx,endIdx);
    if(pivotIdx+1==k) return arr[pivotIdx];
    else if(pivotIdx+1<k) return kthSmallest(arr,pivotIdx+1,endIdx,k); 
    else kthSmallest(arr,startIdx,pivotIdx-1,k);
}
int main(){
    int arr[]={8,9,13,62,33,43,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;    // find kth smallest element in arr
    cout<<kthSmallest(arr,0,n-1,k);
}