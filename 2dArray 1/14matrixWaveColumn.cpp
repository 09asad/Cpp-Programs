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
    for(int j=0;j<n;j++)
    {
        if(j%2==0)      // j = 0,2,4,.... 
        {
            for(int i=0;i<m;i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else       // j = 1,3,5,...
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}