#include <iostream>
using namespace std;

//-------NODE CLASS----------//
class node{
public:
    int data;
    node* next;

    node(int data){
        this->data = data;
        next = NULL;
    }
};

//------LINKED LIST INSERT AT HEAD--------//
void insertAtHead(node* &head,int data){
    
    if(head==NULL){
        head = new node(data);
        return;
    }

    node* n = new node(data);
    n->next = head;
    head = n;
}

//------LINKED LIST INSERT AT MIDDLE------//
void insertMiddle(node* &head,int data,int pos){
    if(pos==0){
        insertAtHead(head,data);
    }
    else{
        node * temp = head;

        for(int jump=1;jump<pos-1;jump++) temp=temp->next;

        node* n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void printLL(node* head){

    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,1);
    insertAtHead(head,0);

    printLL(head);

    insertMiddle(head,2,3);
    printLL(head);

    return 0;
}