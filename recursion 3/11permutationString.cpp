#include<iostream>
#include<string>
using namespace std;
void permutations(string ans, string str){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        permutations(ans+ch,left+right);
    }
}
int main(){
    string str = "abc";
    permutations("",str);
}