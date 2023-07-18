//  DELTE FIRST NODE IN A LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node*next;
    Node(int x)
    {
        data=x;
        next =NULL;
    }
};
Node *FirstNode(Node*head)
{
    if(head==nullptr)
    {
        cout<<"List is empty :\n";
        return NULL;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}
void display(Node*head)
{
    while (head!=nullptr)
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
    head->next->next->next=new Node(40);
    cout<<"Displaying your node elements : \n";
    display(head);
    head=FirstNode(head);
    cout<<"Displaying your list after deleting the first Node : \n";
    display(head);
return 0;
}