#include<iostream>                              // LeetCode 31
#include<vector>
#include<algorithm>
using namespace std;
    void nextPermutation(vector<int>& nums) 
    {
        int n=nums.size();
        int idx=-1;
        // step1) find pivot index
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)    // if array is already greatest
        {
            reverse(nums.begin(),nums.end());
            return;
        }
    
        // step2) sorting/reverse after pivot 
        sort(nums.begin()+idx+1,nums.end());

        // step3) find just greater element than idx 
        int j=-1;
        for(int i=idx+1;i<n;i++)
        {
            if(nums[i]>nums[idx])
            {
                j=i;
                break;
            }
        }

        // step3) swapping idx and idx+1
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;        
    }

int main()
{
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(3);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    nextPermutation(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}