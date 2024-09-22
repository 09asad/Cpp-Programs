#include<iostream>
using namespace std;
int main()
{
    int A[5]={2,4,6,8,10};
    int *p=A,*q=&A[4];                       // A -> 1st element & A[4] -> 4th element
                                          // so the difference is 4
    cout<<p-q;

    return 0;
}