#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    // in-built sorting
    sort(v.begin(),v.end());    // Time complexity = O(nlogn)
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}