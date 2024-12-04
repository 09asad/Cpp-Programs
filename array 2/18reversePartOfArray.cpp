#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i, int j, vector<int>&v)
{
    while(i<=j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
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

    reversePart(1,4,v);            // index 1 to 4 reversed
    display(v);
}