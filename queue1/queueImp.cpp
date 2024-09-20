// 2nd file
// queueImp.cpp

#include <iostream>
#include "queueDef.cpp"

using namespace std;

// Constructor to initialize queue
Queue::Queue() : front(0), rear(-1), size(0) {}

// Check if the queue is empty
bool Queue::isEmpty() {
    return size == 0;
}

// Check if the queue is full
bool Queue::isFull() {
    return size == MAX_SIZE;
}

// Add element to queue
void Queue::enqueue(int val) {
    if (isFull()) {
        cout << "Queue is full" << endl;
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    arr[rear] = val;
    size++;
}

// Remove element from queue
int Queue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Returning -1 to indicate an error
    }
    int value = arr[front];
    front = (front + 1) % MAX_SIZE;
    size--;
    return value;
}

// Get the front element of the queue
int Queue::peekFront() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Returning -1 to indicate an error
    }
    return arr[front];
}

// Get the rear element of the queue
int Queue::peekRear() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return -1; // Returning -1 to indicate an error
    }
    return arr[rear];
}

// Display queue elements
void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = 0; i < size; i++) {
        cout << arr[(front + i) % MAX_SIZE] << " ";
    }
    cout << endl;
}