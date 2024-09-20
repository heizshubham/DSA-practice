#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    st.pop();

    cout << "Size of stack: " << st.size() << endl;

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}