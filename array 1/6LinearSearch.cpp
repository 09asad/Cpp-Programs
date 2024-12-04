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
    int item;
    cout<<"Enter item to be search ";
    cin>>item;
    bool flag = false;          // false -> not present
    for(int i=0;i<n;i++)
    {
        if(item==arr[i])
        flag=true;
    }
    if(flag==true)
    cout<<"Element found"<<endl;
    else
    cout<<"Element not found";
}