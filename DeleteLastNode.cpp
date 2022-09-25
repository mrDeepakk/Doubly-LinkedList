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

void Insert(int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        tail=n;
        return;
    }
    tail->next=n;
    n->previous=tail;
    tail=n;
}

void DeleteLastNode(){
    node*toDelete=tail;
    tail=tail->previous;
    tail->next=NULL;
    delete toDelete;
}

void Display(){
    node*temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->previous;
    }
    cout<<endl;
}



int main()
{
    Insert(11);
    Insert(45);
    Insert(32);
    Insert(31);
    Insert(35);
    Display();
    DeleteLastNode();
    Display();

    return 0;
}