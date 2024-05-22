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
void delete_at_position(Node* &head, int pos)
{
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;//here dlelteNode is a pointer and it will vanist after the function execution
    tmp->next = tmp->next->next;//but tmp->next is dynamic memory
    tmp->next->prev = tmp;  
    delete deleteNode;                          
}
void delete_tail(Node* &head,Node* &tail)
{
    Node* dnode = tail;
    tail = tail->prev;
    tail->next = NULL;  //connect the node before deleted node to null so that it will not point to anything.
    if(tail==NULL)
    {
        head==NULL;
        return;
    }
    delete dnode;
}
void delete_head(Node* &head, Node*  &tail)
{
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    if(head == NULL)
    {
        tail = NULL;
        return;
    }
    delete temp;
}
int main() 
{
     Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    Node* tail = head;

    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;
    
    int pos;
    cin>>pos;

    if(pos>=size(head))
    {
        cout<<"Invalid position\n";
    }
    else if(pos==0)
    {
        delete_head(head,tail);
    }
    else if(pos==size(head)-1)
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_at_position(head, pos);
    }
    print(head);
    print_reverse(tail);
    return 0;
}