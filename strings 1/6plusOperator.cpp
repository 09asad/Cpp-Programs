#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "abc";
    cout<<s<<endl;
    s = s + "def";       // OR  s = "xyz" + s
    cout<<s<<endl;
}                     // '+' operator used to modify the string