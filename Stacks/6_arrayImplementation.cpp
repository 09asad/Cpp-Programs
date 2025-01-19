#include<iostream>
using namespace std;
class stack{       // user defined data structure
public:
    int arr[5];
    int idx;
    stack(){   // Constructor to initialize stack
        idx = -1;
    }
    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0])-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        if(idx==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);    // overflow
    cout<<st.size()<<endl;   // 5
    st.pop();   
    cout<<st.size()<<endl;   // 4
    cout<<st.top()<<endl;   // 40
    st.display();
}