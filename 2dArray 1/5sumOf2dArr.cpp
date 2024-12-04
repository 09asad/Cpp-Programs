#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter no of rows ";
    cin>>m;
    int n;
    cout<<"Enter no of columns ";
    cin>>n;
    int arr[m][n];
    // taking input
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    // max
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum += arr[i][j];
        }
    }
    cout<<"Sum of all the element is "<<sum;
}