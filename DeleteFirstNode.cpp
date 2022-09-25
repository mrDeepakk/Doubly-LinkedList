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

node* head=NULL;
node*tail=NULL;

void InsertAtEnd(int val){
    node*n=new node(val);
    node*temp=head;
    if(head==NULL){
        head=n;
        tail=n;
        return;
    }
    tail->next=n;
    n->previous=tail;
    tail=n;

}
void DeleteFirstNode(){
    node* toDelete=head;
    head=head->next;
    head->previous=NULL;
    delete toDelete;
}
void display(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    InsertAtEnd(3);
    InsertAtEnd(9);
    InsertAtEnd(7);
    InsertAtEnd(1);
    InsertAtEnd(10);
    display();
    DeleteFirstNode();
    display();


    return 0;
}