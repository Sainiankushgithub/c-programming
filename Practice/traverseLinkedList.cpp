// TRAVERSE A LINKED LIST 
#include<bits/stdc++.h>
using namespace std;
struct NODE
{
    int data;
    NODE* next;
    NODE(int x)
    {
        data=x;
        next=NULL;
    }
};
void display(NODE*head)
    {
        while(head!=NULL)
        {
            cout<<(head->data)<<" ";
            head=head->next;
        }
    }
int main()
{
    NODE*head=new NODE(10);
    head->next=new NODE(20);
    head->next->next=new NODE(30);
    cout<<"Displaying your linkedlist elements :\n";
    display(head);
return 0;
}