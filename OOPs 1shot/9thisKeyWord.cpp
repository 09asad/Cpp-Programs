#include<iostream>
using namespace std;
class Cricketer
{
    public:
    string name;
    int runs;
    
    Cricketer(string name, int runs)    // constructor variable name same as class name then "this" keyword used
    {
        this->name=name;
        this->runs=runs;
    }
};

int main()
{
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",20000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}