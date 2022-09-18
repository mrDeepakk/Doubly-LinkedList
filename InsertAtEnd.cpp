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

void InsertAtEnd(int val){
    node*temp=head;
    node*n=new node(val);
    if(head==NULL){
        head=n;
        tail=n;
        n->previous=NULL;
        return;
    }
    tail->next=n;
    n->previous=tail;
    tail=n;
}

void displayForward(){
    node*temp=head;
    cout<<"Forward Direction traversing: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void displayBackward(){
    node*temp=tail;
    cout<<"Backward traversing: " ;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->previous;
    }
    cout<<endl;
}
int main()
{
    InsertAtEnd(3);
    InsertAtEnd(5);
    InsertAtEnd(2);
    InsertAtEnd(1);
    displayForward();
    displayBackward();
    return 0;
}