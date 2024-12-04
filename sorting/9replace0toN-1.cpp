//in the given vector all elements are +ve, replace min element with 0, second min with 1,........n-1
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>v1={19,12,23,8,16};
    int n=v1.size();
    for(int i=0;i<n;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    int x=0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx=-1;
        for(int j=0;j<n;j++){
            if(v1[j]<=0) continue;
            else {
                if(min>v1[j]){
                    min=v1[j];
                    mindx=j;
                }
            }
        }
        v1[mindx]=-x;
        x++;
    }
    for(int i=0;i<n;i++){
        v1[i]=-v1[i];
        cout<<v1[i]<<" ";
    }
}
// Time complexity O(n^2) and space complexity O(1)