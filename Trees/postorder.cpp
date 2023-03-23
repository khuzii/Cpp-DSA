#include <bits/stdc++.h>
using namespace std;
struct Node  {
    int data;
    Node *left;
    Node *right;
    Node(int data)  {
        this->data= data;
        this->left= NULL;
        this->right= NULL;
    }
};
int idx;
Node* buildTree(int nodes[])  {
    idx++;
    if(nodes[idx]==-1)  {
        return NULL;
    }
    struct Node *newNode;
    newNode= new Node(nodes[idx]);
    newNode->left= buildTree(nodes);
    newNode->right= buildTree(nodes);
    return newNode;
}
void postorder(struct Node *root)  {
    if(root==NULL)  {
        return;
    }
    cout<<root->data<<" ";
    postorder(root->left);
    postorder(root->right);
}
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    struct Node *root= buildTree(nodes);
    postorder(root);
    return 0;
}