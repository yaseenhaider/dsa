#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;


    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    // Create 100 nodes
    for (int i = 1; i <= 10; i++) {
        Node* newNode = new Node(1);
        if (head == nullptr) {
            // First node
            head = newNode;
            tail = newNode;
        } else {
            // Attach
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        cout << "\n ";
        cout << current << "\n";
        cout << current->next << "\n";
        current = current->next;
    }

    return 0;
}
