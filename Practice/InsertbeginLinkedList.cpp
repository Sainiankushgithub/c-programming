// INSERT AT THE BEGIN IN LINKD LIST
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node* InsertBegin(Node*head,int x)
{
    Node*temp=new Node(x);
    temp->next=head;
    return temp;
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
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    cout<<"Displying your Node of Linkedlist :\n";
    display(head);
    head=InsertBegin(head,5);
    cout<<"Displaying after inserting the node \n";
    display(head);
return 0;
}