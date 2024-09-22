#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age ";
    cin>>age;
    if(age<12 || age>50)
    cout<<"Eligible";                // child or old man
    else
    cout<<"Not Eligible";
    return 0;
}