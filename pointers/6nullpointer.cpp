#include<iostream>
using namespace std;
int main()
{
    int* ptr1 = NULL;       // reserved address
    int* ptr2 = 0;
    int* ptr3 = '\0';          // \0 -> null character
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3;
}