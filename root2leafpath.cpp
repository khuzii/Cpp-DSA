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
    if(root->data > val)  {
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

void printpath(vector<int> path)  {
    for(auto it: path)  {
        cout<<it<<" ";
    }
    cout<<endl;
}

void printRoot2Leaf(Node *root, vector<int> path)  {
    if(root==NULL)  {
        return;
    }
    path.push_back(root->data);
    if(root->left==NULL && root->right==NULL)  {
        printpath(path);
    }
    printRoot2Leaf(root->left, path);
    printRoot2Leaf(root->right, path);
    path.pop_back();
}

int main()  {
    vector<int> nodes={5, 1, 3, 4, 2, 7};
    Node *root= NULL;
    vector<int> path;
    for(int i=0; i<nodes.size(); i++)  {
        root= buildbst(root, nodes[i]);
    }
    inorder(root);
    cout<<endl<<"Printing paths: "<<endl;
    printRoot2Leaf(root, path);
    return 0;
}