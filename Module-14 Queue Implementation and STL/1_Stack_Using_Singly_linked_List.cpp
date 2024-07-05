#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*  next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class myQueue
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node* nnode = new Node(val);
        if(head==NULL)
        {
            head = tail = nnode;
            return;
        }
        tail->next = nnode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* dnode = head;
        head = head->next;
        if(head==NULL)
        {
            tail=NULL;
        }
        delete dnode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};
int main() 
{
    myQueue q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}