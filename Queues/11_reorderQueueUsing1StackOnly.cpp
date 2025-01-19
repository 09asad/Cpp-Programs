#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reorder(queue<int>&q){
    int n = q.size();
    stack<int>st;
    for(int i=1;i<=n/2;i++){   // push 1st half from q to st
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());    // empty the st into q
        st.pop();
    }
    for(int i=1;i<=n/2;i++){   // push 1st half (prev it was 2nd half) from q to st
        st.push(q.front());
        q.pop();
    }
    // interlieve one by one
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    
}
void reverse(queue<int>&q){
    stack<int>st;
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
}
void display(queue<int>&q){
    int n = q.size();
    for(int i=1;i<=n;i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    reverse(q);
    display(q);
}