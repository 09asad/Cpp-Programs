#include<iostream>
using namespace std;

template<class T>
T maxim(T a, T b)
{
    // if(a>b)
    // return a;
    // else
    // return b;
    return a>b?a:b;
}

int main()
{
    cout<<maxim(12,14)<<endl;
    cout<<maxim(2.3f,1.4f)<<endl;
}