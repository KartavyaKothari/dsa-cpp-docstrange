#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node *left;
    Node *right;

    Node(char d){
        left = right= nullptr;
        data = d;
    }

    Node(){
        left = right= nullptr;
    }
};

class Tree{
    public:
    Node *root;

    Tree(){
        root = nullptr;
        root = new Node('A');
        
        root->left = new Node('B');
        root->left->right = new Node('D');
        root->left->right->left = new Node('E');

        root->right = new Node('C');
        root->right->left = new Node('F');
        root->right->right = new Node('G');
        root->right->right->left = new Node('H');
    }

    void inorder_traversal(){
        inorder(root);
        cout<<endl;
    }

    void inorder(Node *n){
        if(n==nullptr) return;

        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }

    void preorder_traversal(){
        preorder(root);
        cout<<endl;
    }

    void preorder(Node *n){
        if(n==nullptr) return;

        cout<<n->data<<" ";
        preorder(n->left);
        preorder(n->right);
    }

    void postorder_traversal(){
        postorder(root);
        cout<<endl;
    }

    void postorder(Node *n){
        if(n==nullptr) return;

        postorder(n->left);
        postorder(n->right);
        cout<<n->data<<" ";
    }
};

int main(){
    Tree t;
    t.inorder_traversal();
    t.preorder_traversal();
    t.postorder_traversal();

    return 0;
}