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
static int idx=-1;
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
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root= buildTree(nodes);
    cout<<root->data;
    return 0;
}