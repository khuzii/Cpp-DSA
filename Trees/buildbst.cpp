#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int data)  {
        this->data= data;
        this->left= NULL;
        this->right= NULL;
    }
};

Node* buildbst(Node *root, int val)  {
    if(root==NULL)  {
        root= new Node(val);
        return root;
    }
    else if(root->data > val)  {
        root->left= buildbst(root->left, val);
    }
    else  {
        root->right= buildbst(root->right, val);
    }
    return root;
}

void inorder(Node *root)  {
    if(root==NULL)  {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()  {
    vector<int> nodes= {5, 1, 3, 4, 2, 7};
    Node *root= NULL;
    for(int i=0; i<nodes.size(); i++)  {
        root= buildbst(root, nodes[i]);
    }
    inorder(root);
    return 0;
}