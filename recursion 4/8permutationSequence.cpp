#include<iostream>           // LeetCode 60
#include<string>
#include<vector>
using namespace std;
void permutations(vector<string>&v, string ans, string str){
    if(str==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutations(v,ans+ch,left+right);
    }
}
int main(){
    string str = "123";
    vector<string>v;
    int k = 3;
    permutations(v,"",str);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<v[k-1];
}