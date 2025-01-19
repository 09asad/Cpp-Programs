#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(50);
    dq.push_front(60);
    dq.push_front(70);
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<"Elements in deque: ";
    for(int i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}