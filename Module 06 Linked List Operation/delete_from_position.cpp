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
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void insert_at_any_position(Node *&head,  int pos, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next =  newNode;
}
void insert_at_first(Node *&head,int val)
{
    Node *newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}
void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void delete_from_position(Node *&head, int pos)
{
    Node *temp = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    Node* dnode = temp->next;
    temp->next = temp->next->next;
    delete dnode;
}
int main() 
{
    Node *head=NULL;
    cout<<"Option 1: Insert at tail "<<endl;
    cout<<"Option 2: Print linled list "<<endl;
    cout<<"Option 3: Insert at any position "<<endl;
    cout<<"Option 4: Insert at first "<<endl;
    cout<<"Option 5: Delete from position "<<endl;
    cout<<"Option 6: Terminate "<<endl;
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
            if(pos==0)
            {
                insert_at_first(head,val);
            }
            else
            {
                insert_at_any_position(head,pos,val);
            }
        }
        else if(op==4)
        {
            int val;
            cout<<"Enter the element to be inserted in front of the linked list : ";
            cin>>val;
            insert_at_first(head,val);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter position ";
            cin>>pos;
            delete_from_position(head,pos);
        }
        else if(op==6)  
        {
            break;
        }  
        
        }
    
    return 0;
}