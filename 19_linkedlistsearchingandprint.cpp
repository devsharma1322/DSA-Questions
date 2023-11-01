#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = NULL;
    }

    
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

   
    int search(int value) {
        Node* current = head;
        int count=0;
        while (current != NULL) {
            if (current->data == value) {
                return count;
            }
            count++;
            current = current->next;
        }
        return -1; 
    }

  
    void print() {
        Node* current = head;
        while (current !=  NULL) {
            cout << current->data << "  ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;

    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);

    cout << "Linked List:" << endl;
    myList.print();

    int searchValue = 2;
    if (myList.search(searchValue)>=0) {
       cout << "Value " << searchValue << " found in the linked list at "<<myList.search(searchValue) << endl;
    } 
    else {
        cout << "Value " << searchValue << " not found in the linked list." << endl;
    }

    return 0;
}