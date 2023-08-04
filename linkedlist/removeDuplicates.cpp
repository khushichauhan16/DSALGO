#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* head = NULL;
    void createNode(int newdata)
    {
        Node* temp;
        temp=head;
        Node* newnode=new Node();
        newnode->data=newdata;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return;
    }
    void removeDuplicates()
    {
        Node *p1,*p2,*dup;
        p1=head;
        while(p1!=NULL && p1->next!=NULL)
        {
            p2=p1;
            while(p2->next!=NULL)
            {
                if(p1->data==p2->next->data)
                {
                    dup=p2->next;
                    p2->next=p2->next->next;
                    delete(dup);
                }
                else
                p2=p2->next;
            }
            p1=p1->next;
        }
    }
    void display()
    {
        Node* temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main()
{
   Node ob;
    ob.createNode(1);
    ob.createNode(2);
    ob.createNode(2);
    ob.createNode(1);
    ob.removeDuplicates();
    ob.display(); 
}