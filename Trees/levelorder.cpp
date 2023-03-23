#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data)  {
        this->data= data;
        this->left= left;
        this->right= right;
    }
};
static int idx= -1;
struct Node* buildTree(int nodes[])   {
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
void levelorder(struct Node *root)  {
    if(root==NULL)  {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty() )  {
        struct Node *currNode= q.front();
        q.pop();
        if(currNode==NULL)  {
            cout<<endl;
            if(q.empty())  {
                break;
            }
            else  {
                q.push(NULL);
            }
        }
        else  {
            cout<<currNode->data<<" ";
            if(currNode->left != NULL)  {
                q.push(currNode->left);
            }
            else  {
                q.push(NULL);
            }
            if(currNode->right != NULL)  {
                q.push(currNode->right);
            }
            else  {
                q.push(NULL);
            }

        }
    }
}
int main()  {
    int nodes[]= {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    struct Node *root= buildTree(nodes);
    levelorder(root);
    return 0;
}