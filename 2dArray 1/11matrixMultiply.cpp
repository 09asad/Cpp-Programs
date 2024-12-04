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

    // for matrix multiplication 1st ka column = 2nd ka row i.e. n=p
    if(n!=p)
    cout<<"Matrix multiplication not possible"<<endl;
    else
    {
    int res[m][q];           // resultant matrix will be of order mxq
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            res[i][j] = 0;
            for(int k=0;k<n;k++)         // k<n/p 
            {
                res[i][j] += arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i =0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
}