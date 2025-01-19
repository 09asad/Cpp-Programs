#include<iostream>
using namespace std;
class node{      // user defined data type
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

class Deque{   // user defined data structure
public:
    node* head;
    node* tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }
    void pushBack(int val){   // insertAtTail
        node* temp = new node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }
    void pushFront(int val){    // insertAtHead
        node* temp = new node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        s++;
    }
    void popFront(){    // deleteAtHead
        if(s==0){
            cout<<"Queue is empty!";
            return;
        }
        head = head->next;
        if(head!=NULL) head->prev = NULL;
        if(head==NULL) tail = NULL;  
        s--;
    }
    void popBack(){     // deleteAtTail
        if(s==0){
            cout<<"Queue is empty!";
            return;
        }
        else if(s==1){
            popFront();
            return;
        }
        node* temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"Queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"Queue is empty";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
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
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.pushFront(60);
    dq.pushBack(70);
    dq.display();
    cout<<dq.size()<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}