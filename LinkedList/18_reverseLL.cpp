#include<iostream>        // LeetCode 206
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
node* reverseList(node* head) {
    node* prev = NULL;    // 3 pointers prev,curr & Next
    node* curr = head;
    node* Next = head;
    while(curr!=NULL){
        Next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = Next;
    }
    return prev;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(50);
    node* d = new node(60);
    node* e = new node(80);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    display(a);
    cout<<endl;
    a = reverseList(a);   // Capture the sorted list
    display(a);
}