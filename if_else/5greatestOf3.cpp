#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"Greater is "<<a;
    }
    else
    {
        if(b>c)
        cout<<"Greater is "<<b;
        else
        cout<<"Greater is "<<c;
    }
    return 0;
}