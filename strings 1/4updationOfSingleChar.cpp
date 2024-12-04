#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of string ";
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(i%2==0) 
        s[i]='a';
    }
    cout<<s;
}