#include <iostream>
using namespace std;

class DynamicQueue {
public:
    int size;
    int* q;
    int front;
    int rear;

    // Default Constructor
    DynamicQueue(int s = 5) {
        size = s;
        front = rear = -1;
        q = new int[size];
    }


    bool is_empty() {
        return (rear == -1);
    }

    bool is_full() {
        return (rear == size - 1);
    }

    void resize() {
        int newSize = size * 2;
        int* temp = new int[newSize];

        // Copy old data
        for (int i = 0; i <= rear; i++) {
            temp[i] = q[i];
        }

        delete[] q;
        q = temp;
        size = newSize;

        cout << "\nQueue resized to " << size << " elements\n";
    }


    void Enqueue(int x) {
        if (is_full()) {
            resize();
        }

        if (is_empty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        q[rear] = x;
        cout << "Inserted " << x << " at position " << rear << endl;
    }


    int Dequeue() {
        if (is_empty()) {
            cout << "Underflow\n";
            return -1;
        }

        int x = q[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        return x;
    }


    void display() {
        if (is_empty()) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << q[i] << " ";
    }
};

int main() {
    DynamicQueue q1(3); // start small (size 3)

    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.display();

    //add another element auto resize
    q1.Enqueue(40);
    q1.display();

    q1.Enqueue(50);
    q1.display();

    return 0;
}
