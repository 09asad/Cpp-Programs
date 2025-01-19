#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int val){          // no need to pass argument for next in constructor
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    node a(10);
    node b(20);
    node c(30);
    node d(40);
    
    // forming linked list
    a.next = &b;
    b.next = &c;
    c.next = &d;

    // print b val without using b
    cout<<(a.next)->val;           // OR  cout<<(*(a.next)).val;
    cout<<endl;
    // print c val without using b & c
    cout<<((a.next)->next)->val;
    cout<<endl;
    // print d val without using b,c & d
    cout<<(((a.next)->next)->next)->val;

}