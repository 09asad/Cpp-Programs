#include<iostream>                       // LeetCode 42
#include<vector>
using namespace std;
vector<int> prevGreatest(vector<int>&heights)
{
    int n=heights.size();
    vector<int>prev(n);
    prev[0]=-1;
    int max=heights[0];
    for(int i=1;i<n;i++)
    {
        prev[i]=max;
        if(max<heights[i]) 
        max=heights[i];
    }
    return prev;
}

vector<int> nextGreatest(vector<int>&heights)
{
    int n=heights.size();
    vector<int>next(n);
    next[n-1]=-1;
    int max=heights[n-1];
    for(int i=n-2;i>=0;i--)
    {
        next[i]=max;
        if(max<heights[i]) 
        max=heights[i];
    }
    return next;
}

vector<int> resultArray(vector<int>&heights,vector<int>&prev,vector<int>&next)
{
    int n=heights.size();
    vector<int>mini(n);
    for(int i=0;i<n;i++)
    {
        mini[i]=min(prev[i],next[i]);
    }
    return mini;
}
vector<int> waterTrapped(vector<int>&heights, vector<int>&mini)
{
    int n=heights.size();
    vector<int>waterUnit(n);
    int water=0;
    for(int i=1;i<n-1;i++)
    {
        if(heights[i]<mini[i])
        {
            water += (mini[i]-heights[i]);
        }
    }
    cout<<"Water traped in units are "<<water<<endl;
}
    
int main()
{
    vector<int>heights;
    heights.push_back(4);
    heights.push_back(2);
    heights.push_back(0);
    heights.push_back(3);
    heights.push_back(2);
    heights.push_back(5);
    for(int i=0;i<heights.size();i++)
    {
        cout<<heights[i]<<" ";
    }
    cout<<endl;

    vector<int>ans1 = prevGreatest(heights);
    vector<int>ans2 = nextGreatest(heights);
    vector<int>ans3 = resultArray(heights,ans1,ans2);
    vector<int>ans4 = waterTrapped(heights,ans3);
}