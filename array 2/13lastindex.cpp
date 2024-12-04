#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(9);
    v.push_back(6);
    v.push_back(3);
    v.push_back(7);
    v.push_back(1);
    v.push_back(0);
    v.push_back(4);
    // 7 elements -> size=7,(0-6)
    int x=1;
    int idx=-1;
    // for(int i=0;i<v.size();i++)          // starting se dekh rha hai
    // {
    //     if(v[i]==x)
    //     idx=i;
    // }
    for(int i=v.size()-1;i>=0;i--)        // last se dekh rha hai
    {
        if(v[i]==x)
        {
            idx=i;
            break;
        }
    }
    cout<<idx;
}