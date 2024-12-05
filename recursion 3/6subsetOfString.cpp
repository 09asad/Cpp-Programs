#include<iostream>
#include<string>
using namespace std;
void printSubset(string ans, string str, int idx){
    if(idx==str.length()){
        cout<<ans<<endl;
        return;
    }
    char ch = str[idx];
    printSubset(ans,str,idx+1);      // logic in notes
    printSubset(ans+ch,str,idx+1);
}
int main(){
    string str = "abc";
    printSubset("",str,0);
}