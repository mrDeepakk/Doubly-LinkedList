#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *previous;
    node(int val)
    {
        data = val;
        next = NULL;
        previous = NULL;
    }
};

node *head = NULL;
node *tail = NULL;

void InsertAtEnd(int val)
{
    node *temp = head;
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        tail = n;
        n->previous = NULL;
        return;
    }
    tail->next = n;
    n->previous = tail;
    tail = n;
}

void insertAtAny(int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        tail = n;
    }
    while (temp->data !=4)
    {
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next->previous=n;
    temp->next=n;
    n->previous=temp->next;
}

void displayForward()
{
    node *temp = head;
    cout << "Forward Direction traversing: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward()
{
    node *temp = tail;
    cout << "Backward traversing: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->previous;
    }
    cout << endl;
}
int main()
{
    InsertAtEnd(9);
    InsertAtEnd(8);
    InsertAtEnd(6);
    InsertAtEnd(4);
    InsertAtEnd(1);
    InsertAtEnd(2);
    displayForward();
    displayBackward();
    insertAtAny(50);
    displayForward();

    return 0;
}