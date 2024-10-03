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

void print(Car c)                // passing object to function for avoid re writing to print like was in 1studentclass
{
    cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
}

int main()
{
    Car c1;
    c1.name="Honda city";
    c1.price=1500000;
    c1.seat=5;
    c1.type="Sedan";

    Car c2;
    c2.name="Swift";
    c2.price=700000;
    c2.seat=4;
    c2.type="Hatchback";

    Car c3;
    c3.name="Fortuner";
    c3.price=3600000;
    c3.seat=8;
    c3.type="SUV";

    print(c1);
    print(c2);
    print(c3);
}