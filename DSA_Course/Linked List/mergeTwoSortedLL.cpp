#include <iostream>
using namespace std;

class node{
    public: 
        int data;
        node* next;

    node(int data){
        this->data=data;
        next = NULL;
    }
};

void insertAtHead(node* &head,int data){
    
    if(head==NULL){
        head = new node(data);
        return;
    }

    node* n = new node(data);
    n->next = head;
    head = n;
}

void printLL(node* head){

    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

node* merge(node* a, node* b){
    //Base Case
    if(a==NULL) return b;
    if(b==NULL) return a;

    
    //Recursive Case
    node* c;

    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c = b;
        c->next = merge(a,b->next);
    }

    return c;
}

int main()
{
    node *a = NULL;
    node *b = NULL;
    insertAtHead(a, 7);
    insertAtHead(a, 5);
    insertAtHead(a, 3);

    insertAtHead(b, 8);
    insertAtHead(b, 6);
    insertAtHead(b, 5);
    insertAtHead(b, 1);

    printLL(a);
    printLL(b);

    node *c = merge(a,b);
    printLL(c);

    return 0;
}
