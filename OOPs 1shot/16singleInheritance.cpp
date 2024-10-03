#include<iostream>
using namespace std;

class Scooty        // parent class
{
    public:
    int topSpeed;
    float mileage;
    private:
    int bootSpace;
};
class Bike : public Scooty     // child class
{
    public:
    int gears;
};

int main()
{
    Bike b1;
    b1.topSpeed=180;
    b1.mileage=11.8;
    b1.gears=6;
    
    cout<<b1.topSpeed<<" "<<b1.gears<<" "<<b1.mileage<<endl;
}