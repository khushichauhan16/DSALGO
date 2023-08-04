#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* head = NULL;
void pushItemAtStart(int newdata)
{
    Node* new_node=new Node();
    new_node->data=newdata;
    new_node->next=head;
    head=new_node;
}
void pustItemAfterGivenNode(int newdata)
{
    int i;
    Node* temp=head;
    Node* new_node=new Node();
    new_node->data=newdata;
    int loc;
    cout<<"Enter loc after which you want to add:"<<endl;
    cin>>loc;
    if(loc==0)
    {
        head=new_node;
    }
    for(i=0;i<loc-1;i++)
    {
        temp=temp->next;
    }
    new_node->next=temp->next;
        temp->next=new_node;
}
void pushItemAtEnd(int newdata)
{
    Node* temp=head;
    Node* new_node=new Node();
    new_node->data=newdata;
    new_node->next=NULL;
    if(head==NULL)
    head=new_node;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void popItemfromStart()
{
    int item;
    item=head->data;
    head=head->next;
    cout<<item<<" is popped from beginning of list."<<endl;
}
void popItemfromEnd()
{
    int item;
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    item=temp->next->data;
    temp->next=NULL;
     cout<<item<<" is popped from end of list."<<endl;
}
void popItemfromAnyLocation()
{
    int loc,i;
    cout<<"Enter loc to which you want to remove:"<<endl;
    cin>>loc;
    int item;
    Node* temp=head;
    for(i=1;i<loc-1;i++)
    {
        temp=temp->next;
    }
    cout<<temp->data<<" is popped from given location of list."<<endl;
    temp->next=temp->next->next;
}
void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void reverse()
    {
        Node* temp = head;
        Node *prev = NULL, *next = NULL;
 
        while (temp != NULL) 
        {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        head = prev;
    }
 
};  
int main()
{
    Node ob;
    ob.pushItemAtStart(40);
    ob.pushItemAtStart(30);
    ob.pushItemAtStart(20);
    ob.pushItemAtStart(10);
    ob.popItemfromAnyLocation();
    ob.reverse();
    ob.display();
}