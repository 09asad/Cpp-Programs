#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());       // string will sort according to ASCII values
    cout<<s;
}