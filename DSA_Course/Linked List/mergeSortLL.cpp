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
        next = NULL;
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

void printLL(node *head)
{

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

node *merge(node *a, node *b)
{
    //Base Case
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;

    //Recursive Case
    node *c;

    if (a->data < b->data)
    {
        c = a;
        c->next = merge(a->next, b);
    }
    else
    {
        c = b;
        c->next = merge(a, b->next);
    }

    return c;
}

node * midPoint(node* head){
    node *slow = head;
    node *fast = head->next;

    while (fast!=NULL and fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node * mergeSort(node *head)
{
    // Base Case
    if(head==NULL or head->next==NULL){
        return head;
    }

    node * mid = midPoint(head);
    node * a = head;
    node * b = mid->next;
    mid->next = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a,b);
}

int main()
{
    node *a = NULL;

    insertAtHead(a, 7);
    insertAtHead(a, 5);
    insertAtHead(a, 3);
    insertAtHead(a, 8);
    insertAtHead(a, 6);
    insertAtHead(a, 5);
    insertAtHead(a, 1);

    printLL(a);

    a = mergeSort(a);
    printLL(a);

    return 0;
}
