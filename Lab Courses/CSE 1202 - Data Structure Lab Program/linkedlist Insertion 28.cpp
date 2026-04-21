#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }
    void insertAtFirst(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void insertAtLast(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
    void insertAfterIndex(int index, int value) {
        Node* current = head;
        int count = 0;
        while (current != nullptr && count < index) {
            current = current->next;
            count++;
        }
        if (current == nullptr) {
            cout << "Index out of bounds!\n";
            return;
        }
        Node* newNode = new Node(value);
        newNode->next = current->next;
        current->next = newNode;
    }
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL\n";
    }};
int main() {
    LinkedList list;
    int size;
    cout << "Enter number of elements for initial linked list: ";
    cin >> size;
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        list.insertAtLast(value);
    }
    cout << "\nInitial Linked List: ";
    list.printList();
    // Insert at first
    int firstValue;
    cout << "\nEnter a value to insert at the beginning: ";
    cin >> firstValue;
    list.insertAtFirst(firstValue);
    cout << "After inserting at first: ";
    list.printList();
    // Insert at last
    int lastValue;
    cout << "\nEnter a value to insert at the end: ";
    cin >> lastValue;
    list.insertAtLast(lastValue);
    cout << "After inserting at last: ";
    list.printList();
    // Insert after a specific index
    int index, newValue;
    cout << "\nEnter the index after which you want to insert: ";
    cin >> index;
    cout << "Enter the new value to insert: ";
    cin >> newValue;
    list.insertAfterIndex(index, newValue);
    cout << "After inserting after index " << index << ": ";
    list.printList();
    return 0;
}
