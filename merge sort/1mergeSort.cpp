#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&a, vector<int>&b, vector<int>&res){   // merge 2 sorted array
    int i=0;  // for a
    int j=0;  // for b
    int k=0;  // for res
    while(i<a.size() && j<b.size()){
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
    if(i==a.size()){    // if 'a' is completed then fill elements of 'b' as it is
        while(j<=b.size()-1){
            res[k]=b[j];
            j++;
            k++;
        }
    }
    if(j==b.size()){    // if 'b' is completed then fill elements of 'a' as it is
        while(i<=a.size()-1){
            res[k]=a[i];
            i++;
            k++;
        }
    }
}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int>a(n1), b(n2);
    // copy pasting
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    // recursion
    mergeSort(a);
    mergeSort(b);
    // merge
    merge(a,b,v);
    // for improving space complexity, delete array after merging
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,1,3,0,4,9,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);       // same as arr, copy
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}