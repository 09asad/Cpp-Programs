#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }    
};
void display(node* head){  // O(1) space
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void displayRev(node* tail){   // O(1) space
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);
    // forming doubly linkedlist
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    displayRev(e);
}