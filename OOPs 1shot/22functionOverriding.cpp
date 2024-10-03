#include<iostream>
using namespace std;

class Scooty        // parent class
{
    public:
    int topSpeed;
    float mileage;

    virtual void sound()               // virtual keyword used to override 
    {
        cout<<"Vroom Vroom"<<endl;
    }
    private:
    int bootSpace;
};
class Bike : public Scooty     // child class
{
    public:
    int gears;

    void sound()
    {
        cout<<"Dhroom Dhroom"<<endl;
    }
};
class superBike : public Scooty     // child class
{
    void sound()
    {
        cout<<"Zroom Zroom"<<endl;
    }
};

int main()
{
    Scooty* b = new Bike();      // object pointer scooty but due to virtual keyword it doesn't print vroom 
    b->sound();                           // rather it print bike and superBike sound
    Scooty* c = new superBike();
    c->sound();
    
}