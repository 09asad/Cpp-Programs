#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,4,1,6};
    int* ptr=arr;         // or &arr[0] 
    // pointer me 1st element ka address pass hone se ptr gets access to control all the elements of array
    *ptr=8;     // ptr[0]=8;
    ptr++;      // ptr is pointing to 2nd element
    *ptr=9;     // ptr[1]=9
    ptr--;      // ptr is pointing to 1st element
    cout<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    // ptr=arr;
    for(int i=0;i<5;i++)
    {
        cout<<i[arr]<<" ";
        ptr++;
    }
}