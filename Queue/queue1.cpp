#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;

    q.pop();

    cout << "Size of queue: " << q.size() << endl;

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}