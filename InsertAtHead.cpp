#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*previous;
    node(int val){
        data=val;
        next=NULL;
        previous=NULL;
    }
};

node*head=NULL;
node*tail=NULL;

void InsertAtHead(int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        tail=n;
        // n->previous=NULL;
        return;
    }
    n->next=head;  
    head->previous=n;
    head=n;
}

void displayForward(){
    node*temp=head;
    cout<<"Forward Direction traversing: ";
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void displayBackward(){
    node*temp=tail;
    cout<<"Backward traversing: ";
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->previous;
    }
    cout<<endl;
}



int main()
{
    InsertAtHead(1);
    InsertAtHead(6);
    InsertAtHead(9);
    InsertAtHead(2);
    InsertAtHead(5);
    displayForward();
    displayBackward();


    return 0;
}