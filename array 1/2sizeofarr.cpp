#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,4,7,3,5,9,4,2,4,7};
    int size = sizeof(arr)/sizeof(arr[0]);      //arr[0].arr[1],arr[2],........ same answer aayega
    cout<<size;
}