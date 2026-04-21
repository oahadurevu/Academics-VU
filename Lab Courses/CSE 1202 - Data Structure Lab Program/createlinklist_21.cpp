#include <iostream>
using namespace std;

// 1. Node তৈরি করা (struct দিয়ে আরো সহজ)
struct Node {
    int data;      // ডেটা রাখবে
    Node* next;    // পরের Node এর অ্যাড্রেস রাখবে
};

// 2. Array থেকে Linked List তৈরি করার ফাংশন
Node* createLinkedList(int arr[], int size) {
    Node* head = nullptr;     // শুরুতে কোনো নোড নাই
    Node* current = nullptr;  // এখনো কোনো কারেন্ট নোড নাই

    for (int i = 0; i < size; i++) {
        Node* temp = new Node; // নতুন নোড তৈরি
        temp->data = arr[i];   // নোডে ডেটা রাখলাম
        temp->next = nullptr;  // এখনো কোনো পরবর্তী নোড নাই

        if (head == nullptr) { // যদি লিস্ট খালি হয়
            head = temp;       // নতুন নোডই হবে head
            current = temp;    // current ও একই নোড
        } else {
            current->next = temp; // আগের নোডের সাথে কানেক্ট করলাম
            current = temp;       // current কে আপডেট করলাম
        }
    }

    return head; // শেষমেশ head রিটার্ন করবো
}

// 3. মেইন ফাংশন
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* a = new int[size]; // Array তৈরি করলাম ডায়নামিকভাবে

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        cin >> a[i]; // ইউজার থেকে ইনপুট নিচ্ছি
    }

    Node* head = createLinkedList(a, size); // Linked list বানালাম
    Node* current = head;                   // শুরুতে head থেকেই দেখা শুরু

    cout << "Linked list: ";
    while (current != nullptr) {
        cout << current->data << " -> "; // প্রতিটা নোডের data দেখাচ্ছি
        current = current->next;         // পরের নোডে যাচ্ছি
    }
    cout << "NULL" << endl; // শেষ হলে NULL দেখাবো

    // 4. মেমরি ফ্রি করা (ভালো অভ্যাস)
    current = head;
    while (current != nullptr) {
        Node* next = current->next; // পরের নোড ধরে রাখছি
        delete current;             // বর্তমান নোড ডিলিট করছি
        current = next;             // পরের নোডে যাচ্ছি
    }

    delete[] a; // Array ডিলিট করছি
    return 0;
}
