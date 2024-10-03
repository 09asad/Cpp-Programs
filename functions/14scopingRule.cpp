#include<iostream>
using namespace std;

int x=10;
int main()
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;           // print 30
    }
    cout<<x<<endl;              // print 20
    cout<<::x<<endl;            //print 10
}