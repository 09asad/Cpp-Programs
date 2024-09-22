#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter n ";
    cin>>n;
    for(i=1;i<=n;i++)         // 1+2+3+.....+n
    {
        sum += i;
    }
    cout<<"Sum of first "<<n<<" natural number is "<<sum<<endl;
}