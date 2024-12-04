#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v)
{
    int n=v.size();
    int noO=0;          // no. of ones
    int noZ=0;          // no. of zeroes
    for(int i=0;i<n;i++)
    {
        if(v[i]==0) noZ++;
        else noO++;
    }
    // filling elements
    for(int i=0;i<n;i++)
    {
        if(i<noZ) v[i]=0;
        else v[i]=1;
    }
}
int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sort01(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}