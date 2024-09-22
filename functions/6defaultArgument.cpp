#include<iostream>
using namespace std;

int sum(int a,int b,int c=0)
{
    return a+b+c;
}

int main()
{
    cout<<sum(10,5)<<endl;;
    cout<<sum(12,13,14)<<endl;
}