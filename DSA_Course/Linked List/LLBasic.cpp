#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class MyLinkedList
{
public:
    /** Initialize your data structure here. */
    int size;
    node * head;
    MyLinkedList()
    {
        size = 0;
        head = nullptr;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int idx)
    {
        if(idx >= size or idx < 0) return -1;

        node * current = head;

        for(int i = 0; i<idx ;i++){
            current = current->next;
        }

        return current->data;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        addAtIndex(0,val);
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        addAtIndex(size,val);
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if( index < 0 || index > size) return;

        node *current = head;
        node *newnode = new node(val);

        if(index == 0){
            newnode->next = current;
            head = newnode;
        }else{

            for (int i = 0; i < index-1 ; i++)
            {
                current = current->next;
            }
           newnode->next = current->next;
           current->next = newnode;
        }
        size++;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if(index < 0 || index >= size) return;

        if(index==0){
            node* newnode = head->next;

            delete head;
            head = newnode;
            
        }else{

            node *current = head;

            for (int i = 0; i < index - 1; i++)
            {
                current = current->next;
            }

            node *nextnode = current->next->next;

            delete current->next;
            current->next = nextnode;
        }  
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */