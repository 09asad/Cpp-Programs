#include<iostream>
using namespace std;

float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}

int main()
{
    float a=1.4,b=2.3,c;
    c=add(a,b);
    cout<<"Sum is "<<c<<endl;
    return 0;
}