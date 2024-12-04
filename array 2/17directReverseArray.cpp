#include<iostream>
#include<vector>
#include<algorithm>                // used for built in functions
using namespace std;
void display(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter array size ";
    cin>>n;

    cout<<"Enter array elements ";
    for(int i=0;i<n;i++)
    {
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

    reverse(v.begin(),v.end());         // built in function
    display(v);
}