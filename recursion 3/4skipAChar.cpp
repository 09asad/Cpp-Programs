#include<iostream>
#include<string>
using namespace std;
void removeChar(string str, string ans, int idx){
    if(idx==str.length()){
        cout<<ans;
        return;
    }
    char ch = str[idx];
    if(ch=='a') removeChar(str,ans,idx+1);
    else removeChar(str,ans+ch,idx+1);
}
int main(){
    string str = "asad khan";
    removeChar(str,"",0);
}