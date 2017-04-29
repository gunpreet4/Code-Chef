#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
struct node
{
   int data;
   struct node* next;
} ;
struct node* head;
void insert(int x)
{
    node* temp=new node;
    temp->data=x;
    temp->next=NULL;
    if (head==NULL)
    {head=temp;
    return ;}
    node* a=new node;
    a=head;
    while(a->next!=NULL)
       {
           a=a->next;}
    a->next=temp;
}
void reverse()
{
    if(head==NULL)
       {
           return;}
    stack < node*> s;
    node* temp=head;
    while(temp!=NULL)
    {
        s.push(temp);
        temp=temp->next;
    }
     temp=s.top();
    head=temp;
    s.pop();
    while(!s.empty())
    {
        temp->next=s.top();
        s.pop();
        temp=temp->next;
    }
    temp->next=NULL;
}
void print()
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}
int main()
{
    head=NULL;
        insert(2);
        insert(5);
        insert(8);
        print();
        reverse();
        print();
        return 0;
}
