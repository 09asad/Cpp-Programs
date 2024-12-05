#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubset(string ans, string str, int idx, vector<string>&v, bool flag){
    if(idx==str.length()){
        v.push_back(ans);
        return;
    }
    char ch = str[idx];
    if(str.length()==1){
        if(flag==true) storeSubset(ans+ch,str,idx+1,v,true);
        storeSubset(ans,str,idx+1,v,true);
        return;   // so that below 2 conditions doesn't run
    }
    char dh = str[idx+1];
    if(ch==dh){   // duplicate
        if(flag==true) storeSubset(ans+ch,str,idx+1,v,true);
        storeSubset(ans,str,idx+1,v,false);
    }
    else{   // no duplicate
        if(flag==true) storeSubset(ans+ch,str,idx+1,v,true);
        storeSubset(ans,str,idx+1,v,true);
    }
}
int main(){
    string str = "aab";
    vector<string>v;
    storeSubset("",str,0,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        cout<<endl;
    }
}