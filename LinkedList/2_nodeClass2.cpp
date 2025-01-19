#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int val){          // no need to pass argument for next
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

    // print the node
    node temp = a;
    while(1){                       // 1 bcoz of infinite loop BUT it is not best for printing
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=(*(temp.next));
    }
}