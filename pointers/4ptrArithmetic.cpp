#include<iostream>
using namespace std;
int main()
{
    int x=7;
    int* ptr=&x;
    cout<<*ptr<<endl;    // 7
    (*ptr)++;
    cout<<*ptr;         // 8
}