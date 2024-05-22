#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(node *&head, int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
        return;
    }
    node * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next=newnode;
}
void print(node *&head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insert_at_any_position(node *&head, int val, int pos)
{
    node *newnode = new node(val);
    node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    cout<<"Inserted at: "<<pos<<endl;
}
void insert_at_head(node *&head, int val)
{
    node *newnode = new node(val);
    if(head==NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
void delete_at_any_position(node *&head, int pos)
{
    node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    node *dnode = temp->next;
    temp->next = temp->next->next;
    cout<<"Delete from : "<<pos<<endl;
}
int main()
{
    node *head = NULL;
    cout<<"Option 1: print linked list"<<endl;
    cout<<"Option 2: insert at tail"<<endl;
    cout<<"Option 3: insert at any position"<<endl;
    cout<<"Option 4: insert at head"<<endl;
    cout<<"Option 5: delete at any position"<<endl;
    cout<<"Option 6: break"<<endl;
    while(true)
    {
        int op;
        cout<<"Please enter a option: ";
        cin>>op;
        if(op==1)
        {
            print(head);
        }
        if(op==2)
        {
            int val;
            cout<<"Please enter a value: ";
            cin>>val;
            insert_at_tail(head,val);
        }
        if(op==3)
        {
            int val,pos;
            cout<<"Please enter a value: ";
            cin>>val;
            cout<<"Please enter a position: ";
            cin>>pos;
            insert_at_any_position(head,val,pos);
        }
        if(op==4)
        {
            int val;
            cout<<"Please enter a value: ";
            cin>>val;
            insert_at_head(head,val);
        }
        if(op==5)
        {
            int pos;
            cout<<"Please enter a position: ";
            cin>>pos;
            delete_at_any_position(head,pos);
        }
        if(op==6)
        {
            break;
        }
    }
}