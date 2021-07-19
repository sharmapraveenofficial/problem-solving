#include<iostream>
using namespace std;

class node{

public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        node* next = NULL;
    }

};


void insertAtHead(node* &head,int data){
    if(head == NULL){
        head = new node(data);
        return;
    }

    node * n = new node(data);  
    n->next = head;
    head = n;
}

node* reverseLL(node* &head){
    // Basd Case
    if(head==NULL || head->next==NULL) return head;

    node * sHead = reverseLL(head->next);
    head->next->next = head;
    head->next = NULL;
    return sHead;
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
    node* reverseHead = reverseLL(head);
    printLL(reverseHead);

    return 0;
}

