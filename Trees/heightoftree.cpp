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
Node* buildtree(int nodes[])  {
    idx++;
    if(nodes[idx]==-1)  {
        return NULL;
    }
    Node *newNode= new Node(nodes[idx]);
    newNode->left= buildtree(nodes);
    newNode->right= buildtree(nodes);
    return newNode;
}
int heightOfTree(Node *root)  {
    if(root==NULL)  {
        return 0;
    }
    int leftHeight= heightOfTree(root->left);
    int rightHeight= heightOfTree(root->right);

    return max(leftHeight, rightHeight)+1;
}
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root= buildtree(nodes);
    cout<<heightOfTree(root)<<endl;
}