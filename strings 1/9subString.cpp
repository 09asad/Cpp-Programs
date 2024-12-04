#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "abcdef";
    // s.substr(idx) -> means idx or uske aage ke sare elements ko print kro
    cout<<s.substr(2)<<endl;
    // s.substr(idx,len) -> means idx or uske aage se len tk print kro
    cout<<s.substr(1,3);
}