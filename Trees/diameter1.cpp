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
int height(Node *root)  {
    if(root==NULL)  {
        return 0;
    }
    int lh= height(root->left);
    int rh= height(root->right);
    return max(lh, rh)+1;
}
int diameter(Node *root)  {
    if(root==NULL)  {
        return 0;
    }
    int d1= diameter(root->left);
    int d2= diameter(root->right);
    int d3= height(root->left)+height(root->right)+1;

    return max(d1, max(d2, d3));
}
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root= buildtree(nodes);
    cout<<diameter(root)<<endl;
    return 0;
}