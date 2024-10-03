#include<iostream>
using namespace std;
int main()
{
    // int x=5;
    // int y=3;
    // int* p1=&x;
    // int* p2=&y;
    // cout<<*p1 + *p2;

    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter first number ";
    cin>>*p1;
    cout<<"Enter second number ";
    cin>>*p2;
    cout<<*p1 + *p2;
}