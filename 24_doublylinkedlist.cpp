#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void printStraight() {
        Node* current = head;
        cout << "Doubly Linked List (Straight Order): ";
        while (current) {
            cout << current->data << " <-> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void printReverse() {
        Node* current = tail;
        cout << "Doubly Linked List (Reverse Order): ";
        while (current) {
            cout << current->data << " <-> ";
            current = current->prev;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Appending elements to the doubly linked list
    dll.append(1);
    dll.append(2);
    dll.append(3);
    dll.append(4);
    dll.append(5);

    // Print the doubly linked list in straight order
    dll.printStraight();

    // Print the doubly linked list in reverse order
    dll.printReverse();

    return 0;
}
