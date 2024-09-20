// 3rd file
// queueMain.cpp

#include <iostream>
#include "queueImp.cpp"

using namespace std;

void menu() {
    cout << "\nQueue Operations Menu" << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Peek Front" << endl;
    cout << "4. Peek Rear" << endl;
    cout << "5. Display" << endl;
    cout << "6. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    Queue q;
    int choice, value;

    while (true) {
        menu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                cout << "Dequeued value: " << q.dequeue() << endl;
                break;
            case 3:
                cout << "Front value: " << q.peekFront() << endl;
                break;
            case 4:
                cout << "Rear value: " << q.peekRear() << endl;
                break;
            case 5:
                q.display();
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
