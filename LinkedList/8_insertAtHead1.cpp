#include<iostream>
using namespace std;
class node{      // user defined data type
public:
    int val;
    node* next;

    node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{   // user defined data structure
public:
    node* head;
    node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtHead(int val){
        node* temp = new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList ll;  // { }
    ll.insertAtHead(10);  // {10->NULL}
    ll.display();
    ll.insertAtHead(20);  // {20->10->NULL}
    ll.display();
    ll.insertAtHead(30);
    ll.insertAtHead(40);
    ll.display();
    
    cout<<"size of the linked list is "<<ll.size;
}