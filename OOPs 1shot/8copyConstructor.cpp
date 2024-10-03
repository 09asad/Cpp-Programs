#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rno;
    float gpa;

    Student()                           // default constructor for zero parameter or normal initialized object
    {}

    Student(string s, int r, float g)           // parametrized constructor for 3 parameter
    {
        name=s;
        rno=r;
        gpa=g;
    }

    Student(string s, int r)                  // parametrized constructor for 2 parameter
    {
        name=s;
        rno=r;
    }

    Student(string s)                       // parametrized constructor for 1 parameter
    {
        name=s;
    }
};

int main()
{
    Student s1("Asad",76);

    Student s2;                         // normal initialized object
    s2.name="Mohd";
    s2.rno=88;
    s2.gpa=8.5;

    Student s3("Raghav",34,9.2);

    Student s4("Mohit");

    Student s5=s2;                      // deep copy
    s5.name="Manish";

    Student s6(s2);                    // copy constructor(deep copy)
    s6.name="Vijay";

    cout<<s1.name<<" "<<s1.rno<<" "<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
    cout<<s3.name<<" "<<s3.rno<<" "<<s3.gpa<<endl;
    cout<<s4.name<<endl;
    cout<<s5.name<<" "<<s5.rno<<" "<<s5.gpa<<endl;
    cout<<s6.name<<" "<<s6.rno<<" "<<s6.gpa<<endl;
}