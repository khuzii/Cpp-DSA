#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int data)  {
        this->data= data;
        this->left= left;
        this->right= right;
    }
};
int idx=-1;
Node* buildTree(int nodes[])  {
    idx++;
    if(nodes[idx]==-1)  {
        return NULL;
    }
    Node *newNode= new Node(nodes[idx]);
    newNode->left= buildTree(nodes);
    newNode->right= buildTree(nodes);
    return newNode;
}
int countOfNodes(Node *root)  {
    if(root==NULL)  {
        return 0;
    }
    int leftNodes= countOfNodes(root->left);
    int rightNodes= countOfNodes(root->right);

    return leftNodes+rightNodes+1;
}
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root= buildTree(nodes);
    cout<<countOfNodes(root)<<endl;
    return 0;
}