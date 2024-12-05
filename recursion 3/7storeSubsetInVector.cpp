#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string str, int idx, vector<string>&v){
    if(idx==str.length()){
        v.push_back(ans);
        return;
    }
    char ch = str[idx];
    storeSubset(ans,str,idx+1,v);
    storeSubset(ans+ch,str,idx+1,v);
}
int main(){
    string str = "abc";
    vector<string>v;
    storeSubset("",str,0,v);
    for(string ele : v){     // for each loop
        cout<<ele<<" ";
    }
}