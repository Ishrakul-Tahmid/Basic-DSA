#include<bits/stdc++.h>
using namespace std;
class BNode
{
public:
    int val;
    BNode *left;
    BNode *right;
    BNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
/*
void printPreOrder(BNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<<root->val<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}*/
/*
void printPostOrder(BNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->val<<" ";
}*/
void printInOrder(BNode *root)
{
    if (root == NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout<<root->val<<" ";
    printInOrder(root->right);
}
int main() 
{
    BNode *root = new BNode(10);
    BNode *a = new BNode(20);
    BNode *b = new BNode(30);
    BNode *c = new BNode(40);
    BNode *d = new BNode(50);
    BNode *e = new BNode(60);
    BNode *f = new BNode(70);
    BNode *g = new BNode(80);
    BNode *h = new BNode(90);
    BNode *i = new BNode(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    h->right = i;
    b->right = d;
    d->left = f;
    d->right = g;

    //printPreOrder(root);
    //printPostOrder(root);
    printInOrder(root);
    return 0;
}