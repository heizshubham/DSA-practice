#include <iostream>
using namespace std;

bool fullStack(int Stack[], int Top, int MAXSIZE) {
    return (Top == MAXSIZE - 1);
}

bool emptyStack(int Stack[], int Top) {
    if (Top == -1) {
        cout << "Stack Underflow" << endl;
        return true;
    }
    return false;
}

int StackTop(int Stack[], int Top) {
    if (emptyStack(Stack, Top)) {
        return -1;
    } else {
        cout << Stack[Top] << endl;
        return Stack[Top];
    }
}

int pushStack(int Stack[], int Top, int MAXSIZE, int Data) {
    if (Top >= MAXSIZE - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        Top++;
        Stack[Top] = Data;
        cout << "Data (" << Data << ") inserted" << endl;
    }
    return Top;
}

int popStack(int Stack[], int Top) {
    if (emptyStack(Stack, Top)) {
        return -1;
    } else {
        int x = Stack[Top];
        Top--;
        cout << "Popped = " << x << endl;
        return Top;
    }
}

void showStack(int Stack[], int Top) {
    if (emptyStack(Stack, Top)) {
        cout << "Stack is empty" << endl;
    } else {
        for (int i = 0; i <= Top; i++) {
            cout << Stack[i] << "\t";
        }
        cout << endl;
    }
}

int main() {
    const int MAXSIZE = 5;
    int Stack[MAXSIZE];
    int Top = -1;
    
    // Example operations
    Top = pushStack(Stack, Top, MAXSIZE, 10);
    Top = pushStack(Stack, Top, MAXSIZE, 20);
    Top = pushStack(Stack, Top, MAXSIZE, 30);
    
    showStack(Stack, Top);
    
    Top = popStack(Stack, Top);
    showStack(Stack, Top);
    
    StackTop(Stack, Top);
    
    return 0;
}
