#include<iostream>
#include<stack>
#include<queue>
using namespace std;
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
void reverseK(queue<int>&q, int k){
    stack<int> st;
    int n = q.size();
    // push first 'k' elemnts into stack
    for(int i=1;i<=k;i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    // push that 'k' elemnts into queue
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    // pop & push first 'n-k' elemets into queue
    for(int i=1;i<=n-k;i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int> q;
    int k = 2;    // reverse first 'k' elements 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
    reverseK(q,k);
    display(q);
}