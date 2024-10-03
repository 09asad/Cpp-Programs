#include<iostream>
using namespace std;

void swap(int a,int b)         // a and b are formal parameter
{
    cout<<a<<" "<<b<<endl;          // before swaping
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;           // after swaping
}
int main()
{
    int x=10,y=20;        // x and y are actual parameter
    swap(x,y);
    // cout<<x<<" "<<y<<endl;
}

// pass by value can't swap actual parameter