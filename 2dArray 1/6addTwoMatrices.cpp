#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter no of rows of 1st matrix ";
    cin>>m;
    int n;
    cout<<"Enter no of columns of 1st matrix ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int p;
    cout<<"Enter no of rows of 2nd matrix ";
    cin>>p;
    int q;
    cout<<"Enter no of columns of 2nd matrix ";
    cin>>q;
    int brr[p][q];
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>brr[i][j];
        }
    }
    if(m!=p || n!=q)
    cout<<"Matrix addition not possible"<<endl;
    else
    {
    int res[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
}