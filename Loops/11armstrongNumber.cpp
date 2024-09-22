#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"Enter number ";
    cin>>n;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(temp==sum)
    cout<<"Armstrong Number";
    else
    cout<<"Not armstrong number";
}