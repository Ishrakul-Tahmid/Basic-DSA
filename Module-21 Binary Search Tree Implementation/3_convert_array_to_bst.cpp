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
BNode* convert(int a[], int n, int l, int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    BNode* root = new BNode(a[mid]);
    BNode* leftRoot = convert(a,n,l,mid-1);
    BNode* rightRoot = convert(a,n,mid+1,r);

    root->left = leftRoot;
    root->right = rightRoot;
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
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    BNode* root = convert(a,n,0,n-1);
    level_order(root);
    return 0;
}