 # include<iostream>
#include<vector>
using namespace std;
void change(vector<int>a)         // pass by value a-> 9 6 3 7
{
    a[0]=10;                   // a-> 10 6 3 7
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(3);
    v.push_back(7);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";         // v->9 6 3 7
    }
    cout<<endl;
    change(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";         // v-> 9 6 3 7
    }
    cout<<endl;
}