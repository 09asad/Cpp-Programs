#include<iostream>
using namespace std;
class Car
{
    public:
    string name;
    int price;
    int seat;
    string type;
};

void print(Car c)
{
    cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
}
void change(Car &c)                // pass by reference
{
    c.name="Fortuner";
    c.price=3800000;
    c.seat=8;
    c.type="SUV";
}

int main()
{
    Car c1;
    c1.name="Honda city";
    c1.price=1500000;
    c1.seat=5;
    c1.type="Sedan";

    print(c1);
    change(c1);
    print(c1);
}