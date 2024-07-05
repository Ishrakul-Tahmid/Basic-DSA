#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node*  next;
    Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myStack//This type known as camel case
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
        nnode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* dnode = tail;
        tail = tail->prev;
        if(tail==NULL) head = NULL;
        else tail->next=NULL;
        delete dnode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()//O(1)
    {
        if(sz==0) return true;
        else return false;
    }
};
int main() 
{
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())//!st.empty() means false
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}