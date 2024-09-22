#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    if(true)
    {
        int c=a+b;
        cout<<c<<endl;        // c is only valid in this if condition
    }
    // cout<<c<<endl;
}