// INSERT AT THE END IN LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    Node*next;
    int data;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node*InsertEnd(Node*head,int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
        return temp;
    }
    Node*curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void display(Node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Displaying your linked list element :\n";
    display(head);
    head=InsertEnd(head,40);
    cout<<"Displaying after inserting at the end: \n";
    display(head);
return 0;
}