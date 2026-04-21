#include <iostream>
using namespace std;

// 1. Node তৈরি করা
struct Node {
    int data;      // ডেটা রাখবে
    Node* next;    // পরের Node এর ঠিকানা রাখবে
};

// 2. Linked List তৈরি করার ফাংশন
Node* createLinkedList(int arr[], int size) {
    Node* head = nullptr;     // শুরুতে লিস্ট খালি
    Node* current = nullptr;  // এখনো কোনো নোড নাই

    for (int i = 0; i < size; i++) {
        Node* temp = new Node; // নতুন নোড বানাই
        temp->data = arr[i];   // ইনপুট থেকে ডেটা নিই
        temp->next = nullptr;  // নতুন নোডের পর কিছু নাই

        if (head == nullptr) { // যদি প্রথম নোড হয়
            head = temp;        // head সেট করি
            current = temp;     // current ও সেট করি
        } else {
            current->next = temp; // আগের নোডের সাথে কানেক্ট করি
            current = temp;       // current কে আপডেট করি
        }
    }

    return head; // লিস্টের শুরুতে head রিটার্ন করি
}

// 3. Searching Function
bool search(Node* head, int key) {
    Node* current = head;

    while (current != nullptr) {
        if (current->data == key) { // যদি মিল পাই
            return true;
        }
        current = current->next; // না মিললে পরের নোডে যাই
    }

    return false; // পুরো লিস্টে না পেলে false
}

// 4. Main Function
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // ডাইনামিক array

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // ইউজার ইনপুট নিই
    }

    Node* head = createLinkedList(arr, size); // Linked List তৈরি করি

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    if (search(head, key)) {
        cout << "Value found in linked list!" << endl;
    } else {
        cout << "Value NOT found in linked list." << endl;
    }

    // 5. Memory free করি
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next; // পরের নোড রাখি
        delete current;             // বর্তমান নোড ডিলিট করি
        current = next;              // পরের নোডে যাই
    }
    delete[] arr; // array ডিলিট করি

    return 0;
}
