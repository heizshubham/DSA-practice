#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include "Node.h"

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void create(int val);
    void insert(int val, int pos);
    void deleteNode(int val);
    Node* search(int val);
    int retrieve(int pos);
    bool isEmpty();
    int listCount();
    void destroy();
    void display();
};

#endif // SINGLYLINKEDLIST_H
