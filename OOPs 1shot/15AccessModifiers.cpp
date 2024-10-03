#include<iostream>
using namespace std;

class Student
{
    private:
    float marks;

    public:
    int rno;
    string name;

    Student()
    {}

    Student(int r, string n, float m)
    {
        rno=r;
        name=n;
        marks=m;
    }

    float getMarks()           // getter function -> used to print private class value
    {
        return marks;
    }
    int setMarks(float m)       // setter function -> used to change private class value
    {
        marks=m;
    }
};

int main()
{
    Student s1(8,"Asad Khan",85.9);
    cout<<s1.rno<<" "<<s1.name<<" "<<s1.getMarks()<<endl;
    s1.setMarks(87.3);
    cout<<s1.rno<<" "<<s1.name<<" "<<s1.getMarks()<<endl;
}