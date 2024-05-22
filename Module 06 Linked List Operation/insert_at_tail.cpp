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
void print_linked_list(Node * head)
{
    Node *tmp = head;
    cout<<"Linked List are : ";
    while(tmp!= NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main() 
{
    Node * head = NULL;
    cout<<"Option 1: Insert at tail "<<endl;
    cout<<"Option 2: Print linled list "<<endl;
    cout<<"Option 3: Terminate "<<endl;
    while(true)
    {
        cout<<"Please enter a option : ";
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter value : ";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            break;
        }
    }
    return 0;
}