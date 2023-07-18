// DELETING THE LAST NODE IN LINKED LIST 
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
Node*DelLast(Node*head)
{
    if(head==nullptr)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    while(head->next->next!=nullptr)
    {
        head=head->next;
    }
    delete head->next;
    head->next=nullptr;
    return head;
}
void Display(Node*head)
{
    while(head!=nullptr)
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
    head->next->next->next->next=new Node(50);
    cout<<"Displaying your Linked list elements :\n";
    Display(head);
    DelLast(head);
    cout<<"Displayying your list after deleting from the end :\n";
    Display(head);
return 0;
}