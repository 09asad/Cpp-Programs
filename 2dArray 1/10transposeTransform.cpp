#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows/columns ";
    cin>>n;
    int arr[n][n];              // valid only for square matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)         // j -> i to n-1
        {
            int temp = arr[i][j];         // swap arr[i][j] and arr[j][i]
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}