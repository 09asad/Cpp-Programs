#include<iostream>
using namespace std;

class Loading
{
    public:
    void sum(int a, int b)
    {
        cout<<a+b<<endl;
    }
    void sum(int a, int b, int c)
    {
        cout<<a+b+c<<endl;
    }
    void sum(string a, string b)
    {
        cout<<a+b<<endl;
    }
};                                  // same fun name but diff no. of parameter or diff datatypes

int main()
{
    Loading a;
    a.sum(5,9);
    a.sum(5,6,8);
    a.sum("Asad","Khan");
}