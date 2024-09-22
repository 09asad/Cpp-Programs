#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    // Rectangle r1;
    // Rectangle *ptr;
    // ptr=&r1;
    Rectangle *ptr=new Rectangle;             // we can also use above 3 line insted of this 1 line
    ptr->length=10;
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
}