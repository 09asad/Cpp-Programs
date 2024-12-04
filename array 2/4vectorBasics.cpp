#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;        // no need to mention size
    v.push_back(6);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.size()<<" "<<v.capacity()<<endl;

    // if (size==capacity) then capacity will be doubled
}