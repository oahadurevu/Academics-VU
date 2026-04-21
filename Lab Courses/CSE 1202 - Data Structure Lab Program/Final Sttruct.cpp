#include <iostream>
using namespace std;

// Node structure for BST
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Function to insert a node into BST
Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

// In-order traversal to print sorted order
void inOrder(Node* root) {
    if (root == nullptr)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Function to calculate sum of nodes with values less than threshold
int sumNodesLessThanThreshold(Node* root, int threshold) {
    if (root == nullptr)
        return 0;

    int sum = 0;

    // Traverse left subtree
    sum += sumNodesLessThanThreshold(root->left, threshold);

    // Current node
    if (root->data < threshold) {
        cout << root->data << " ";
        sum += root->data;
    }

    // Traverse right subtree
    sum += sumNodesLessThanThreshold(root->right, threshold);

    return sum;
}

int main() {
    int n, val, threshold;
    Node* root = nullptr;

    // Input number of energy usage values
    cout << "Enter number of energy consumption values: ";
    cin >> n;

    cout << "Enter " << n << " energy values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    // Input threshold
    cout << "Enter threshold value: ";
    cin >> threshold;

    // In-order Traversal
    cout << "In-Order Traversal: ";
    inOrder(root);
    cout << endl;

    // Calculate sum of values less than threshold
    cout << "Energy usage values less than " << threshold << ": ";
    int totalEnergy = sumNodesLessThanThreshold(root, threshold);
    cout << endl;

    cout << "Total Energy Usage: " << totalEnergy << endl;

    return 0;
}

