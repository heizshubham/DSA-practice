
// 1st file
// queueDef.cpp

#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Queue {
private:
    int front, rear, size;
    int arr[MAX_SIZE];

public:
    Queue();                // Constructor
    bool isEmpty();         // Check if queue is empty
    bool isFull();          // Check if queue is full
    void enqueue(int val);  // Add element to queue
    int dequeue();          // Remove element from queue
    int peekFront();        // Get the front element
    int peekRear();         // Get the rear element
    void display();         // Display queue elements
};