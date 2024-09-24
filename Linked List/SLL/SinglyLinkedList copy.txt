#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

SinglyLinkedList::SinglyLinkedList() : head(nullptr) {}

SinglyLinkedList::~SinglyLinkedList() {
    destroy();
}

void SinglyLinkedList::create(int val) {
    Node* newNode = new Node(val);
    head = newNode;
}

void SinglyLinkedList::insert(int val, int pos) {
    Node* newNode = new Node(val);

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        delete newNode;
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void SinglyLinkedList::deleteNode(int val) {
    if (head == nullptr) return;

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Value not found" << endl;
    } else {
        Node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }
}

Node* SinglyLinkedList::search(int val) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data == val) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

int SinglyLinkedList::retrieve(int pos) {
    Node* temp = head;
    for (int i = 0; i < pos && temp != nullptr; ++i) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return -1;
    } else {
        return temp->data;
    }
}

bool SinglyLinkedList::isEmpty() {
    return head == nullptr;
}

int SinglyLinkedList::listCount() {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        ++count;
        temp = temp->next;
    }
    return count;
}

void SinglyLinkedList::destroy() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void SinglyLinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
