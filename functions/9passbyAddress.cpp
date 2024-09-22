#include<iostream>
using namespace std;

void swap(int *a,int *b)         // a and b are formal parameter
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=10,y=20;        // x and y are actual parameter
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}

// pass by address can swap actual parameter
