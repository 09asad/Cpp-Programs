#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May I know your name ";
    // cin>>name;                    // for taking only first name
    getline(cin,name);                  // for taking full name
    cout<<"Welcome Mr."<<name;
    return 0;
}