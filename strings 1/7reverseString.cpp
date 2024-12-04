#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s = "abcdef";
    cout<<s<<endl;
    reverse(s.begin()+2,s.end()-1);  
    cout<<s<<endl;
}