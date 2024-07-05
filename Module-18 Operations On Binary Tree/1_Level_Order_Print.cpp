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
void level_order(BNode *root)
{
    queue<BNode*> q;
    q.push(root);
    while(!q.empty())
    {
        //1. ber kore ana
        BNode *temp = q.front();
        q.pop();

        //2. do every task
        cout<<temp->val<<" ";

        //3. put children
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
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

    level_order(root);

    return 0;
}