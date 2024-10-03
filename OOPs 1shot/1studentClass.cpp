#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int rno;
    float gpa;
};

int main()
{
    Student s1;
    s1.name="Asad Khan";
    s1.rno=76;
    s1.gpa=8.3;

    Student s2;
    s2.name="Mohammad";
    s2.rno=88;
    s2.gpa=8.5;

    cout<<s1.name<<" "<<s1.rno<<" "<<s1.gpa<<endl;
    cout<<s2.name<<" "<<s2.rno<<" "<<s2.gpa<<endl;
}