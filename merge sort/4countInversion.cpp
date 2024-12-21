#include<iostream>
#include<vector>
using namespace std;
int count=0; // global variable
int inversion(vector<int>&a, vector<int>&b){
    int i=0,j=0;   // i for a & j for b
    int c=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            c += (a.size()-i);
            j++;
        }
        else i++;
    }
    return c;
}
void merge(vector<int>&a, vector<int>&b, vector<int>&res){   // merge 2 sorted array
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()) while(j<=b.size()-1) res[k++]=b[j++];
    if(j==b.size()) while(i<=a.size()-1) res[k++]=a[i++];
}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2 , n2 = n - n/2;
    vector<int>a(n1), b(n2);
    // copy pasting
    for(int i=0;i<n1;i++) a[i]=v[i];
    for(int i=0;i<n2;i++) b[i]=v[i+n1];
    // recursion
    mergeSort(a);
    mergeSort(b);
    // count the inversion
    count += inversion(a,b);
    // merge
    merge(a,b,v);
    // for improving space complexity, delete array after merging
    a.clear();
    b.clear();
}
int main(){
    int arr[] = {5,1,3,0,4,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    cout<<count;
}