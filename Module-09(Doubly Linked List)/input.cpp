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
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    print(head);
    print_reverse(tail);
    return 0;
}