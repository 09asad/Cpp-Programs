#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter no of rows of matrix ";
    cin>>m;
    int n;
    cout<<"Enter no of columns of matrix ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // wave print
    for(int i=0;i<m;i++)
    {
        if(i%2==0)   // i = 0,2,4,...  as it is
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else       // i = 1,3,5,...   reverse
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}