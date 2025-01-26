#include<iostream>
#include<stack>
#include<vector>
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
void preOrder(node* root){
    stack<node*>st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        node* temp = st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
    cout<<endl;
}
void inOrder(node* root){
    stack<node*>st;
    node* tempp = root;
    while(st.size()>0 || tempp!=NULL){
        if(tempp!=NULL){
            st.push(tempp);
            tempp = tempp->left;
        }
        else{
            node* temp = st.top();
            st.pop();
            cout<<temp->val<<" ";
            tempp = temp->right;
        }
    }
    cout<<endl;
}
void postOrder(node* root){
    stack<node*>st;
    vector<int>ans;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    node* a = new node(1);
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
    // connection of tree
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    preOrder(a);
    inOrder(a);
    postOrder(a);
}