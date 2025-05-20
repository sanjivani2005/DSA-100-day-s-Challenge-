#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
private:
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue is Full\n";
            return;
        }

        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << "Inserted: " << value << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Deleted: " << arr[front++] << endl;
    }

    // Display the queue
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // This should show "Queue is Full"

    q.display();

    return 0;
}
