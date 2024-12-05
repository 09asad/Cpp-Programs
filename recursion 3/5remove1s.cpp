#include<iostream>
#include<vector>
using namespace std;
void removeOne(vector<int>&v1, vector<int>&v2, int idx){
    if(idx==v1.size()){
        return;
    }
    if(v1[idx]!=1) v2.push_back(v1[idx]);
    removeOne(v1,v2,idx+1);
}
int main(){
    vector<int>v1={1,2,3,1,1,4,1,7};
    vector<int>v2;
    removeOne(v1,v2,0);
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}