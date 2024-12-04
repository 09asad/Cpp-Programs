#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0,x=5;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x)
        count++;
    }
    cout<<count;
}
