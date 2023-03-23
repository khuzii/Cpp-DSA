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
struct TreeInfo  {
    int height;
    int diameter;
    TreeInfo(int h, int d)  {
        height= h;
        diameter= d;
    }
};
TreeInfo* diameter(Node *root)  {
    if(root==NULL)  {
        TreeInfo *temp= new TreeInfo(0,0);
        return temp;
    }
    TreeInfo *left1= diameter(root->left);
    TreeInfo *right1= diameter(root->right);
    int myHeight= max(left1->height, right1->height)+1;
    int d1= left1->diameter;
    int d2= right1->diameter;
    int d3= left1->height + right1->height +1;

    int myDiam= max(d1, max(d2, d3));
    TreeInfo *myInfo= new TreeInfo(myHeight, myDiam);
    
    return myInfo;
}
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    Node *root= buildtree(nodes);
    TreeInfo *temp= diameter(root);
    cout<<temp->diameter<<endl;
    return 0;
}