#include<iostream>
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
int levels(node* root){
    if(root==NULL) return 0;
    return 1 + max(levels(root->left),levels(root->right));
}
void nthLevel(node* root, int current, int level){     // left to right
    if(root==NULL) return;
    if(current==level){
        cout<<root->val<<" ";   // root
        return;
    }
    nthLevel(root->left, current+1, level);   // left
    nthLevel(root->right, current+1, level);   // right
}
void nthLevelRev(node* root, int current, int level){      // right to left 
    if(root==NULL) return;
    if(current==level){
        cout<<root->val<<" ";   // root
        return;
    }
    nthLevelRev(root->right, current+1, level);   // right
    nthLevelRev(root->left, current+1, level);   // left
}
void levelOrder(node* root){
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i);     // nthLevelRev(root,1,i); (for reverse level order)
        cout<<endl;
    }
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

    levelOrder(a);
}