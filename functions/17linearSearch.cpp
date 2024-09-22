#include<iostream>
using namespace std;

int search(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(key==A[i])
        return i;
    }
    return -1;
}

int main()
{
    int A[]={2,4,5,7,10,9,13};
    int key;
    cout<<"Enter an element to be searched ";
    cin>>key;
    int index=search(A,7,key);
    
    if(index==-1)
    cout<<"Key is not found"<<endl;
    else
    cout<<"key element found at index "<<index<<endl;
}