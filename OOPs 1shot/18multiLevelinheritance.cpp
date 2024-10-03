#include<iostream>
using namespace std;

class Vehicle                // parent class
{
    public:
    int topSpeed;
    float mileage;
    string fuel;
};
class TwoWheeler : public Vehicle      // child class
{
    public:
};
class FourWheeler : public Vehicle      // child class
{
    public:
};
class Scooty : public TwoWheeler      // grandchild class of twoWheeler
{
    public:
};
class Bike : public TwoWheeler      // grandchild class of twoWheeler
{
    public:
};

int main()
{
    TwoWheeler t1;

    FourWheeler f1;

    Scooty s1;

    Bike b1;
}