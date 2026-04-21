#include <iostream>
using namespace std;

// Class definition for a Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Class definition for Binary Search Tree
class BST {
private:
    Node* root;

    Node* insert(Node* node, int value) {
        if (node == nullptr)
            return new Node(value);
        if (value < node->data)
            node->left = insert(node->left, value);
        else
            node->right = insert(node->right, value);
        return node;
    }

    void inOrder(Node* node) {
        if (node == nullptr)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    int sumLessThan(Node* node, int threshold) {
        if (node == nullptr)
            return 0;

        int sum = 0;

        // Left subtree
        sum += sumLessThan(node->left, threshold);

        // Current node
        if (node->data < threshold) {
            cout << node->data << " ";
            sum += node->data;
        }

        // Right subtree
        sum += sumLessThan(node->right, threshold);

        return sum;
    }

public:
    BST() {
        root = nullptr;
    }

    void insert(int value) {
        root = insert(root, value);
    }

    void displayInOrder() {
        cout << "In-Order Traversal: ";
        inOrder(root);
        cout << endl;
    }

    void displayAndSumLessThan(int threshold) {
        cout << "Energy usage values less than " << threshold << ": ";
        int total = sumLessThan(root, threshold);
        cout << endl;
        cout << "Total Energy Usage: " << total << endl;
    }
};

int main() {
    int n, val, threshold;
    BST tree;

    cout << "Enter number of energy consumption values: ";
    cin >> n;

    cout << "Enter " << n << " energy values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        tree.insert(val);
    }

    cout << "Enter threshold value: ";
    cin >> threshold;

    tree.displayInOrder();
    tree.displayAndSumLessThan(threshold);

    return 0;
}
