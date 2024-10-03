#include<iostream>
using namespace std;

class Cricketer           // parent class 1
{
    public:
    int runs;
    int wickets;
    float avg;
};
class Engineer              // parent class 2
{
    public:
    int experienceYears;
    string skills;
};
class person : public Cricketer, public Engineer              // child class
{
    public:
    string name;
    int age;
};

int main()
{
    person p1;
    p1.name="Asad Khan";
    p1.age=21;
    p1.runs=5583;
    p1.avg=53.21;
    p1.wickets=87;
    p1.skills="Full stack developer";
    p1.experienceYears=4;

    cout<<p1.name<<" "<<p1.age<<" "<<p1.runs<<" "<<p1.avg<<" "<<p1.skills<<endl;
}