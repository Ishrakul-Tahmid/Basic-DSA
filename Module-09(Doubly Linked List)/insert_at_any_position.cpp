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
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout<<endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp -> val << " ";
        temp = temp -> prev;
    }
    cout<<endl;
}
void insert_at_any_position(Node* head, int pos, int val)
{
    Node* new_node = new  Node(val);
    Node* temp  = head;
    for(int i=1; i<=pos-1; i++)
    {
        temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    new_node->next->prev = new_node;
    new_node->prev = temp;
}
int size(Node* &head)
{
    Node* tmp = head;
    int count =0;
    while(tmp!=NULL)
    {
       count++;
       tmp = tmp->next;
    }
    return count;
}
void insert_head(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if(head==NULL)
    {
        head = tail= new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}
void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* new_node = new Node(val);
    if(tail==NULL)
    {
        head = tail= new_node;
        return;
    }
    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}
int main() 
{
    //Node *head = NULL;
    //Node* tail = NULL;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    int pos, val;
    cin>>pos>>val;
    
    if(pos>size(head))
    {
        cout<<"Invalid position\n";
    }
    else if(pos==0)
    {
        insert_head(head,tail, val);
    }
    else if(pos==size(head))
    {
        insert_tail(head, tail, val);
    }
    else
    {
        insert_at_any_position(head, pos,val); 
    }
    print(head);
    print_reverse(tail);
    return 0;
}