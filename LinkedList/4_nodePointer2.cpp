#include<iostream>
using namespace std;
class node{
public:
    int val;
    node* next;

    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(node* head){    // we can also display without using temp "Replace temp with head in while loop"
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int size(node* head){
    node* temp = head;
    int n = 0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    // print the node by passing only a in function
    display(a);

    // print size of linked list
    cout<<size(a);
}