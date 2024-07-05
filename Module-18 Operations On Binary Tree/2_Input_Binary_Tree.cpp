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
BNode* input_tree()
{
    int val;
    cin>>val;
    BNode *root;
    if(val==-1) root = NULL;
    else root = new BNode(val);
    queue<BNode*> q;
    //if root have push in queue
    if(root) q.push(root);
    while(!q.empty())
    {
        BNode *p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        BNode *left, *right;
        if(l==-1)
            left = NULL;
        else
            left = new BNode(l);

        if(r==-1)
            right = NULL;
        else
            right = new BNode(r);

        p->left = left;
        p->right = right;

        if(p->left)
        q.push(p->left);
        if(p->right)
        q.push(p->right);
    }
    return root;
}
void level_order(BNode *root)
{
    if(root==NULL)
    {
        return;
    }
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
    BNode *root = input_tree();
    level_order(root);
    return 0;
}