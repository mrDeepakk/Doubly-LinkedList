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

void DeleteAtAny(int pos){
    node*temp=head;
    
    while(pos>1){
        temp=temp->next;
        pos--;
    }
    node*toDelete=temp;
    temp->previous->next=temp->next;
    temp->next->previous=temp->previous;
    delete toDelete;

}
void Display(){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Insert(12);
    Insert(34);
    Insert(23);
    Insert(67);
    Insert(45);
    Insert(90);
    Display();
    DeleteAtAny(3);   //deletion at position no 3
    Display();
    return 0;
}