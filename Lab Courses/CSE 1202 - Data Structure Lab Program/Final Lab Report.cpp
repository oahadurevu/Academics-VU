#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node* insert(Node* root, int val) {
    if (root == NULL) return new Node(val);
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    return root;
}
void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void findIndex(Node* root, int key, int &index, int &foundIndex) {
    if (root == NULL) return;
    findIndex(root->left, key, index, foundIndex);
    index++;
    if (root->data == key) {
        foundIndex = index;
        return;
    }
    findIndex(root->right, key, index, foundIndex);
}

int main() {
    Node* root = NULL;
    int n, val;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        cin >> val;
        root = insert(root, val);
    }

    cout << "\nInorder: ";
    inorder(root);
    cout << "\nPreorder: ";
    preorder(root);
    cout << "\nPostorder: ";
    postorder(root);

    int key;
    cout << "\n\nEnter a value to search: ";
    cin >> key;

    int index = 0, foundIndex = -1;
    findIndex(root, key, index, foundIndex);

    if (foundIndex != -1)
        cout << key << " found at index " << foundIndex << " in Inorder traversal.\n";
    else
        cout << key << " not found in the tree.\n";

    return 0;
}

