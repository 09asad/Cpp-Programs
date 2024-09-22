#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0;
    cout<<"Enter number ";
    cin>>n;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(temp==rev)
    cout<<"Palindrome number";
    else
    cout<<"Not a palindrome number";
}