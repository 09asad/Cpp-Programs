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
    // store the transpose
    int brr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
}