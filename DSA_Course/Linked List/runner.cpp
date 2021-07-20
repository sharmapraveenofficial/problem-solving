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

int getMid(node *head)
{
    //Complete this function to return data middle node
    node *slow = head; 
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

int kthLastElement(node *head, int k)
{
    //Complete this function to return kth last element
    node *fast = head;
    node *slow = head;

    for(int i=1;i<k;i++){
        fast = fast->next;
    }

    while (fast && fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    return slow->data;
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

    int kthLast = kthLastElement(a,3);

    cout << kthLast << endl;

    return 0;
}
