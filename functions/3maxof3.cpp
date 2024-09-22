#include<iostream>
using namespace std;

int max(int x,int y,int z)
{
    if(x>y && x>z)
    return x;
    else if (x<y && y>z)
    return y;
    else
    return z;
}

int main()
{
    int a,b,c,r;
    cout<<"Enter 3 numbers ";
    cin>>a>>b>>c;
    r=max(a,b,c);
    cout<<"greater is "<<r<<endl;
}