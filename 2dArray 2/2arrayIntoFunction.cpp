#include<iostream>
using namespace std;
// array automatically passed by reference
void change(int a[])            // 1d me no need to pass the size
{
    a[0]=9;
}
void change2D(int arr[3][3])        // 2d me row and column dono pass krna zruri hai 
{
    arr[0][0]=100;
}
int main()
{
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr[0][0]<<endl;
    change2D(arr);
    cout<<arr[0][0]<<endl;
}