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

void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() 
{
    Node *head=NULL;
    cout<<"Option 1: Insert at tail "<<endl;
    cout<<"Option 2: Print linled list "<<endl;
    cout<<"Option 3: Terminate "<<endl;
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
            break;
        }  
    }
    return 0;
}