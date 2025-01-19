#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;   // 0
    st.push(10);  // 1
    st.push(20);  // 2
    st.push(30);  // 3
    st.push(40);  // 4
    cout<<st.size()<<endl;   // 4
    st.pop();  // 3
    cout<<st.size()<<endl;   // 3
    cout<<st.top();  // 30
    cout<<endl;

    stack<int> temp;    // extra stack
    while(st.size()>0){
        cout<<st.top()<<" ";      // display stack in reverse order
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    // putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top()<<" ";    // display stack in normal order
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}