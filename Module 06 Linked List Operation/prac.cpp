#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_At_Tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout<<"Data inserted at head"<<endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout<<"Node inserted at tail"<<endl;
}
void insert_at_head(Node* &head ,int val)
    {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        cout<<"Value inserted at head"<<endl;
    }
void insert_at_any_position(Node* &head,int val,int pos)
{
    Node* newNode=new Node(val);
    Node* temp=head;
    if(head==NULL)
    {
        head = newNode;\
        cout<<"Value inserted at head"<<endl;
        return ;
    }
    for(int i=1; i<=pos-1;i++)
    {
        temp = temp->next;
        if(temp==NULL)
        {
            cout<<"Invalid index "<<endl;
            return;
        }
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Value Inserted at position "<<pos<<endl;
}
void delete_head(Node*& head)
{
    Node* dNode = head;
    head = head->next;
    delete dNode;
    cout<<"Head node deleted \n";
}
void delete_any_position(Node* &head, int pos) 
{
    Node *temp = head;
    for(int i=1; i<pos-1; i++)
    {
        temp = temp->next;
        if(temp == NULL)
        {
            cout<<"Invalid position"<<endl;
            return;
        }
    }
    if(temp->next == NULL)
    {
        cout<<"Invalid index"<<endl;
        return;
    }
    Node* dNode = temp->next;
    temp->next = temp->next->next;
    delete dNode;
    cout<<"Deleted the node with value "<<endl;
}
void print_List(Node* &head)
{
    Node *temp = head;
    cout<<"The values are : ";
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = NULL;
    
    cout<<"Option 1: Insert at tail \n";
    cout<<"Option 2: printlist\n";
    cout<<"Option 3: insert at head\n";
    cout<<"Option 4: insert at position\n";
    cout<<"Option 5: delete head\n";
    cout<<"Option 6: delete at any position\n";
    cout<<"Option 7: Terminate \n";
    while (true)
        {
            int op;
            cout<<"Please enter a option : ";
            cin>>op;

            if(op==1)
            {
                int val;
                cout<<"Enter the value to be inserted : ";
                cin>>val;
                insert_At_Tail(head,val);
            }
            else if(op==2)
            {
                print_List(head);
            }
            else if(op==3)
            {
                int val;
                cout<<"Please enter a value : ";
                cin>>val;
                insert_at_head(head,val);
            }
            else if(op==4)
            {
                int val,pos;
                cout<<"Please enter a value : ";
                cin>>val;
                cout<<"Please enter a position : ";
                cin>>pos;
                insert_at_any_position(head,val,pos);
            }
            else if(op==5)
            {
                delete_head(head);
            }
            else if(op==6)
            {
                int pos;
                cout<<"Please enter a position : ";
                cin>>pos;
                delete_any_position(head,pos);
            }
            else if(op==7   )
            {
                break;
            }
        }
}