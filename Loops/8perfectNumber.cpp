#include<iostream>
using namespace std;
int main()
{
    // Perfect Number-> the sum of the factors of the no. = double the no. 
    int n,i,sum=0;
    cout<<"Enter n ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(2*n==sum)
    cout<<"Perfect Number";
    else
    cout<<"Not a Perfect Number";
}