#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<arr[i][j])
            max=arr[i][j];
        }
    }
    cout<<"Maximum element in this matrix is "<<max;
}