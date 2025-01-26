#include<iostream>
#include<queue>
#include<climits>
using namespace std;
class node{
public:
    int val;
    node* left;
    node* right;
    node(int val){ 
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void levelOrderQueue(node* root){    // left to right
    queue<node*>q;
    q.push(root);
    while(q.size()>0){
        node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
void levelOrderQueueRev(node* root){     // right to left
    queue<node*>q;
    q.push(root);
    while(q.size()>0){
        node* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) q.push(temp->right);
        if(temp->left!=NULL) q.push(temp->left);
    }
    cout<<endl;
}
int main(){
    node* a = new node(1);
    node* b = new node(7);
    node* c = new node(3);
    node* d = new node(2);
    node* e = new node(6);
    node* f = new node(9);
    node* g = new node(5);
    node* h = new node(4);
    node* i = new node(8);
    // connection of tree
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    e->right = h;
    f->left = i;

    levelOrderQueue(a);
    levelOrderQueueRev(a);
}