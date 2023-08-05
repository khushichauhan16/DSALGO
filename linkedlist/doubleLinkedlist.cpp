#include<iostream>
using namespace std;
class Double
{
    public:
    int data;
    Double *next;
    Double *prev;
    Double *head=NULL;
    void pushItemAtStart(int newdata)
    {
        Double *newnode=new Double();
        newnode->data=newdata;
        newnode->prev=NULL;
        newnode->next=head;
        head=newnode;
    }
    void pushItemAtEnd(int newdata)
    {
        Double *newnode=new Double();
        newnode->data=newdata;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        Double* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        return;
    }
    void pustItemAtGivenNodeLoc(int newdata)
{
    int i;
    Double* temp=head;
    Double* newnode=new Double();
    newnode->data=newdata;
    int loc;
    cout<<"Enter loc after which you want to add:"<<endl;
    cin>>loc;
    if(loc==0)
    {
        head=newnode;
        return;
    }
    for(i=0;i<loc-2;i++)
    {
        temp=temp->next;
    }
   
    newnode->next=temp->next;
     temp->next=newnode;
    newnode->prev=temp;
}
    void display()
    {
    Double* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    }
    void reverse()
    {
        Double* temp = head;
        Double *prev = NULL, *next = NULL;
        
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
    Double ob;
    ob.pushItemAtStart(40);
    ob.pushItemAtStart(30);
    ob.pushItemAtEnd(20);
    ob.pushItemAtEnd(10);
    ob.pustItemAtGivenNodeLoc(25);
    ob.reverse();
    ob.display();
}