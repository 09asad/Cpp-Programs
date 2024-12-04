#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,4,1,6};
    int* ptr=arr;         // or &arr[0] 
    // pointer me 1st element ka address pass hone se ptr gets access to control all the elements of array
    cout<<ptr<<endl;
    // ptr[0]=8;
    *ptr=8;
    // for(int i=0;i<5;i++)
    // {
    //     cout<<ptr[i]<<" ";
    // }
    for(int i=0;i<5;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}