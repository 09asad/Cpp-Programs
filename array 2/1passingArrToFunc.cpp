#include<iostream>
using namespace std;
void display(int a[])
{
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[])
{
    b[0]=9;
}
int main()
{
    int arr[5]={1,4,6,3,7};
    display(arr);             // pass by reference --> address of arr passed
    change(arr);
    display(arr);
}