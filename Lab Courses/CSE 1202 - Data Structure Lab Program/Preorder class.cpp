#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// Insert a value into BST
Node* insert(Node* node, int value) {
    if (node == nullptr)
        return createNode(value);

    if (value < node->data)
        node->left = insert(node->left, value);
    else
        node->right = insert(node->right, value);

    return node;
}

// Pre-Order Traversal: Root -> Left -> Right
void preOrder(Node* node) {
    if (node == nullptr)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

// Display and sum values less than threshold
int sumLessThan(Node* node, int threshold) {
    if (node == nullptr)
        return 0;

    int sum = 0;

    if (node->data < threshold) {
        cout << node->data << " ";
        sum += node->data;
    }

    sum += sumLessThan(node->left, threshold);
    sum += sumLessThan(node->right, threshold);

    return sum;
}

int main() {
    int n, val, threshold;
    Node* root = nullptr;

    cout << "Enter number of energy consumption values: ";
    cin >> n;

    cout << "Enter " << n << " energy values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "Enter threshold value: ";
    cin >> threshold;

    cout << "Pre-Order Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "Energy usage values less than " << threshold << ": ";
    int total = sumLessThan(root, threshold);
    cout << endl;
    cout << "Total Energy Usage: " << total << endl;

    return 0;
}
