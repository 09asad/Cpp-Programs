#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;    // front
    int b;    // back (rear)
    vector<int> arr;
    Queue(int val){    // constructor
        f = 0;
        b = 0;
        vector<int> v(val);
        arr= v;
    }
    void push(int val){
        arr[b]=val;
        b++;
    }
    void pop(){
        if(arr.size()==0){
            cout<<"Queue is empty!"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(arr.size()==0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(arr.size()==0){
            cout<<"Queue is empty!"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(arr.size()==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(5);   // if we defined queue's size here, then we have to implement using vector
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}