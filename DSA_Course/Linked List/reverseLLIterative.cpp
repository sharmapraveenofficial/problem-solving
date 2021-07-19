#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        node *next = NULL;
    }
};

void insertAtHead(node* &head, int data)
{
    if (head == NULL)
    {
        head = new node(data);
        return;
    }

    node *n = new node(data);
    n->next = head;
    head = n;
}

void reverseLL(node* &head)
{
    node* current = head;
    node* prev = NULL;
    node* temp;

    while(current!=NULL){
        temp = current->next;

        current->next = prev;
        prev = current;
        current = temp;
    }

    head = prev;
    return;
}

void printLL(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "-->";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 1);
    insertAtHead(head, 0);

    printLL(head);
    reverseLL(head);
    printLL(head);

    return 0;
}
