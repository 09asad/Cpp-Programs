#include<iostream>
using namespace std;

int sum(int a,int b)
{
    return a+b;
}
float sum(float a,float b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}

int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(2.3f,3.1f)<<endl;
    cout<<sum(10,20,3)<<endl;
}