#include<iostream>
using namespace std;
class Cricketer
{
    public:
    string name;
    int runs;
    
    Cricketer(string name, int runs)
    {
        this->name=name;
        this->runs=runs;
    }
};

int main()
{
    Cricketer c1("Virat Kohli",25000);
    Cricketer* c2 = new Cricketer("Rohit Sharma",20000);          // object as a pointer OR dynamic allocation

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;
}