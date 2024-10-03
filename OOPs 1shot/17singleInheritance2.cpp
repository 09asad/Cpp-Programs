#include<iostream>
using namespace std;

class Vehicle        // parent class
{
    public:
    int topSpeed;
    float mileage;
    string fuel;
};
class Car : public Vehicle      // child class
{
    public:
    bool sunroof;
};
class Bike : public Vehicle      // child class
{
    public:
};
class Truck : public Vehicle      // child class
{
    public:
    int weightCarry;
};

int main()
{
    Bike b1;
    b1.topSpeed=180;
    b1.mileage=11.8;
    b1.fuel="Petrol";

    Car c1;
    c1.fuel="Diesel";
    c1.mileage=20.9;
    c1.topSpeed=200;
    c1.sunroof="Yes";

    Truck t1;
    t1.fuel="Diesel";
    t1.mileage=7.4;
    t1.topSpeed=120;
    t1.weightCarry=200;
    
    cout<<b1.topSpeed<<" "<<b1.fuel<<" "<<b1.mileage<<endl;
    cout<<c1.topSpeed<<" "<<c1.fuel<<" "<<c1.mileage<<" "<<c1.sunroof<<endl;;
    cout<<t1.topSpeed<<" "<<t1.fuel<<" "<<t1.mileage<<" "<<t1.weightCarry<<endl;
}