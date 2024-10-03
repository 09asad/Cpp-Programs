#include<iostream>
using namespace std;

class Vector
{
    public:
    int size;
    int capacity;
    int* arr;

    Vector()                        // default constructor
    {
        size=0;
        capacity=1;
        arr = new int[1];
    }

    void add(int ele)
    {
        if(size==capacity)
        {
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0;i<size;i++)
            {
                arr2[i]=arr[i];
            }
            arr = arr2;
        }
        arr[size++] = ele;            // if (size != capacity) then element ko array me store kr ke size ko increment kr do
    }

    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Vector v;
    cout<<v.size<<" "<<v.capacity<<endl;   // 0 1
    v.add(10);
    v.print();   // 10
    cout<<v.size<<" "<<v.capacity<<endl;   // 1 1
    v.add(15);
    v.print();   // 10 15
    cout<<v.size<<" "<<v.capacity<<endl;    // 2 2
    v.add(7);
    v.print();    // 10 15 7
    cout<<v.size<<" "<<v.capacity<<endl;    // 3 4
    v.add(5);
    v.print();    // 10 15 7 5
    cout<<v.size<<" "<<v.capacity<<endl;   // 4 4
}