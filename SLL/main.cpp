#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main() {
    SinglyLinkedList list;

    list.create(10);
    list.insert(20, 1);
    list.insert(30, 2);
    list.insert(40, 1);
    list.display();

    list.deleteNode(20);
    list.display();

    Node* foundNode = list.search(30);
    if (foundNode) {
        cout << "Found: " << foundNode->data << endl;
    } else {
        cout << "Not found" << endl;
    }

    cout << "Element at position 2: " << list.retrieve(2) << endl;

    cout << "List count: " << list.listCount() << endl;

    list.destroy();
    cout << "After destroying the list:" << endl;
    list.display();

    return 0;
}
