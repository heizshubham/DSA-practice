#include <iostream>
using namespace std;

bool fullQueue(int Queue[], int Front, int Rear, int MAXSIZE) {
    return ((Rear + 1) % MAXSIZE == Front);
}

bool emptyQueue(int Queue[], int Front, int Rear) {
    if (Front == -1 && Rear == -1) {
        cout << "Queue Underflow" << endl;
        return true;
    }
    return false;
}

int QueueFront(int Queue[], int Front, int Rear) {
    if (emptyQueue(Queue, Front, Rear)) {
        return -1;
    } else {
        cout << Queue[Front] << endl;
        return Queue[Front];
    }
}

int enqueue(int Queue[], int Front, int Rear, int MAXSIZE, int Data) {
    if (fullQueue(Queue, Front, Rear, MAXSIZE)) {
        cout << "Queue Overflow" << endl;
    } else {
        if (Front == -1) {
            Front = 0;
        }
        Rear = (Rear + 1) % MAXSIZE;
        Queue[Rear] = Data;
        cout << "Data (" << Data << ") inserted" << endl;
    }
    return Rear;
}

int dequeue(int Queue[], int Front, int Rear, int MAXSIZE) {
    if (emptyQueue(Queue, Front, Rear)) {
        return -1;
    } else {
        int x = Queue[Front];
        if (Front == Rear) {
            Front = Rear = -1;
        } else {
            Front = (Front + 1) % MAXSIZE;
        }
        cout << "Dequeued = " << x << endl;
    }
    return Front;
}

void showQueue(int Queue[], int Front, int Rear, int MAXSIZE) {
    if (emptyQueue(Queue, Front, Rear)) {
        cout << "Queue is empty" << endl;
    } else {
        int i = Front;
        while (true) {
            cout << Queue[i] << "\t";
            if (i == Rear) break;
            i = (i + 1) % MAXSIZE;
        }
        cout << endl;
    }
}

int main() {
    const int MAXSIZE = 5;
    int Queue[MAXSIZE];
    int Front = -1;
    int Rear = -1;
    
    // Example operations
    Rear = enqueue(Queue, Front, Rear, MAXSIZE, 10);
    Rear = enqueue(Queue, Front, Rear, MAXSIZE, 20);
    Rear = enqueue(Queue, Front, Rear, MAXSIZE, 30);
    
    showQueue(Queue, Front, Rear, MAXSIZE);
    
    Front = dequeue(Queue, Front, Rear, MAXSIZE);
    showQueue(Queue, Front, Rear, MAXSIZE);
    
    QueueFront(Queue, Front, Rear);
    
    return 0;
}
