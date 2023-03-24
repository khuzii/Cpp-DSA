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

Node* inorder_successor(Node *root)  {
    while(root->left != NULL)  {   // inorder successor= leftmost int the right subtree
        root= root->left;
    }
    return root;
}

Node* deleteNode(Node *root, int val)  {
    if(root->data > val)  {
        root->left= deleteNode(root->left, val);
    }
    else if(root->data < val)  {
        root->right= deleteNode(root->right, val);
    }
    else  {
        if(root->left==NULL && root->right==NULL)  {
            return NULL;
        }
        if(root->left == NULL)  {
            return root->right;
        }
        else if(root->right == NULL)  {
            return root->left;
        }
        Node *is= inorder_successor(root->right);
        root->data= is->data;
        root->right= deleteNode(root->right, is->data);
    }
    return root;
}

int main()  {
    vector<int> nodes= {5, 1, 3, 4, 2, 7};
    Node *root= NULL;
    for(int i=0; i<nodes.size(); i++)  {
        root= buildbst(root, nodes[i]);
    }
    cout<<"Before deletion of 4: "<<endl;
    inorder(root);
    cout<<endl<<"After deletion of 4: "<<endl;
    deleteNode(root, 4);
    inorder(root);
    return 0;
}