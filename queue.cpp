#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;

    // Enqueue (insert) elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Display front and rear
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Dequeue (remove) element
    q.pop();

    // Display after one pop
    cout << "After one pop, front element: " << q.front() << endl;

    // Display all elements
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop(); // remove after printing
    }
    cout << endl;

    return 0;
}
