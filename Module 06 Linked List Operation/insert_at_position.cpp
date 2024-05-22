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
void insert_at_tail(Node *&head,int v)
{
    Node  *newNoode = new Node(v);
    if(head==NULL)
    {
        head=newNoode;
        return;
    }
    Node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    //tmp ecdom last e
    tmp->next=newNoode;
}
void insert_at_any_position(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<"Inserted at "<<pos<<endl;
}
void  printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main() 
{
    Node *head=NULL;
    cout<<"Option 1: Insert at tail "<<endl;
    cout<<"Option 2: Print linled list "<<endl;
    cout<<"Option 3: Insert at any position "<<endl;
    cout<<"Option 4: Terminate "<<endl;
    while (true)
    {
        cout<<"Please enter a option : ";
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter a value : ";
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            cout<<"\nLinked List are : ";
            printList(head);
            cout<<endl;
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Please enter a position : ";
            cin>>pos;
            cout<<"Please enter a value : ";
            cin>>val;
            insert_at_any_position(head,pos,val);
        }
        else if(op==4)
        {
            break;
        }
    }
    
    return 0;
}