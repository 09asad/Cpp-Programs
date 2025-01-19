#include<iostream>
#include<vector>
using namespace std;
class stack{       // user defined data structure
public:
    vector<int> v;
    stack(){   // Constructor to initialize stack

    }
    void push(int val){    // vector have unlimited size so no overflow
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    void display(){
        for(int i=0;i<=v.size();i++){
            cout<<v[i]<<" ";
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
    st.push(60); 
    cout<<st.size()<<endl;   // 6
    st.pop();   
    cout<<st.size()<<endl;   // 5
    cout<<st.top()<<endl;   // 50
    st.display();
}