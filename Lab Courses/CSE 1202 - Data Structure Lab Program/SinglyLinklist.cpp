
#include <iostream>
using namespace std;

struct Node {
    int data;       // ডেটা রাখার জায়গা
    Node* next;     // পরবর্তী নোডের pointer
};

int main() {
    Node *a = NULL, *b = NULL, *c = NULL;

    // new দিয়ে মেমোরি এলোকেট করছি
    a = new Node();
    b = new Node();
    c = new Node();

    cout << "Enter data for 1st node: ";
    cin >> a->data;
    cout << "Enter data for 2nd node: ";
    cin >> b->data;
    cout << "Enter data for 3rd node: ";
    cin >> c->data;


    // লিংক তৈরি করছি
    a->next = b;
    b->next = c;
    c->next = NULL;

    // লিস্ট প্রিন্ট করছি
    Node* temp = a;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // মেমোরি ডিলিট করলে ভালো হয়
    delete a;
    delete b;
    delete c;

    return 0;
}
