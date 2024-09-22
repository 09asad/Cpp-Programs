#include<iostream>
using namespace std;
enum day {mon=1,tue,wed=5,thu,fri,sat=10,sun};
int main()               // if we don't initialize variable with any value then automatically start with zero
{
    day d;
    d=tue;
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;
}