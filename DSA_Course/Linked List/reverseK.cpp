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

void insertAtHead(node *&head, int data)
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

node* kReverse(node *&head,int k)
{

    if(head == NULL) return NULL;

    node *current = head;
    node *prev = NULL;
    node *temp;
    int cnt = 1;

    while (current != NULL && cnt<=k)
    {
        temp = current->next;

        current->next = prev;
        prev = current;
        current = temp;
        cnt++;
    }

    if(temp!=NULL){
        head->next = kReverse(temp, k);
    }

    return prev;
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
    insertAtHead(head, 7);
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);

    printLL(head);
    head = kReverse(head,3);
    printLL(head);

    return 0;
}
