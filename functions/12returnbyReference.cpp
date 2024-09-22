#include<iostream>
using namespace std;

int &fun(int &x)
{
    return x;
}
int main()
{
    int a=10;
    fun(a)=25;           // function as a L value (mostly functions are R value)
    cout<<a<<endl;
}