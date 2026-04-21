#include <iostream>
using namespace std;

class BST {
private:
    struct Node {
        int key;
        Node* left;
        Node* right;
        Node(int val) : key(val), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insert(Node* node, int key) {
        if (node == nullptr) return new Node(key);

        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);

        return node;
    }

    bool search(Node* root, int key) {
        if (root == nullptr) return false;
        if (root->key == key) return true;

        if (key < root->key)
            return search(root->left, key);
        else
            return search(root->right, key);
    }

    void inorder(Node* root) {
        if (root != nullptr) {
            inorder(root->left);
            cout << root->key << " ";
            inorder(root->right);
        }
    }

public:
    BST() : root(nullptr) {}

    void insert(int key) {
        root = insert(root, key);
    }

    bool search(int key) {
        return search(root, key);
    }

    void display() {
        cout << "Inorder traversal: ";
        inorder(root);
        cout << endl;
    }

    void buildTreeFromUserInput() {
        int numNodes;
        cout << "Enter number of nodes to insert: ";
        cin >> numNodes;

        cout << "Enter " << numNodes << " values to insert into BST:\n";
        for (int i = 0; i < numNodes; i++) {
            int value;
            cin >> value;
            insert(value);
        }
    }
};

int main() {
    BST tree;

    // Build BST from user input
    tree.buildTreeFromUserInput();
    tree.display();

    // Search for nodes based on user input
    char choice;
    do {
        int key;
        cout << "\nEnter a key to search: ";
        cin >> key;

        if (tree.search(key))
            cout << key << " is present in the BST.\n";
        else
            cout << key << " is not found in the BST.\n";

        cout << "\nSearch another key? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
