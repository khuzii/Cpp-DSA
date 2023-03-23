#include <bits/stdc++.h>
using namespace std;
 
struct Node  {
    int data;
    Node *left;
    Node *right;
    Node(int data)  {
        this->data= data;
        this->left= left;
        this->right= right;
    }
};

int idx= -1;
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

bool isIdentical(Node *root, Node *subroot)  {
    if(root==NULL && subroot==NULL)  {
        return true;
    }
    if(root==NULL || subroot==NULL)  {
        return false;
    }
    if(root->data == subroot->data)  {
        return isIdentical(root->left, subroot->left) && isIdentical(root->right, subroot->right);
    }

    return false;
}

bool isSubtree(Node *root, Node *subroot)  {
    if(subroot==NULL)  {
        return true;
    }
    if(root==NULL)  {
        return false;
    }
    if(root->data == subroot->data)  {
        if(isIdentical(root, subroot))  {
            return true;
        } 
    }
    return isSubtree(root->left, subroot) || isSubtree(root->right, subroot);
}

int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int nodes1[]= {3, 4, -1, -1, 5};
    
    Node *root= buildtree(nodes);
    Node *subroot= buildtree(nodes1);

    if(isSubtree(root, subroot))  cout<<"YES"<<endl;
    else  cout<<"NO"<<endl;

    return 0;
}