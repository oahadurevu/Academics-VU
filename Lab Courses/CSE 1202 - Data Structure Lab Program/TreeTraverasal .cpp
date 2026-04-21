#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};

class BinaryTree {
private:
    Node* root;

    void preorderHelper(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preorderHelper(node->left);
        preorderHelper(node->right);
    }

    void inorderHelper(Node* node) {
        if (node == nullptr) return;
        inorderHelper(node->left);
        cout << node->data << " ";
        inorderHelper(node->right);
    }

    void postorderHelper(Node* node) {
        if (node == nullptr) return;
        postorderHelper(node->left);
        postorderHelper(node->right);
        cout << node->data << " ";
    }

public:
    BinaryTree() : root(nullptr) {}

    void createTree() {
        if (root != nullptr) {
            cout << "Tree already exists!" << endl;
            return;
        }

        int rootData;
        cout << "Enter root node value: ";
        cin >> rootData;
        root = new Node(rootData);

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* current = q.front();
            q.pop();

            int leftData, rightData;
            cout << "Enter left child of " << current->data << " (enter -1 for no child): ";
            cin >> leftData;

            if (leftData != -1) {
                current->left = new Node(leftData);
                q.push(current->left);
            }

            cout << "Enter right child of " << current->data << " (enter -1 for no child): ";
            cin >> rightData;

            if (rightData != -1) {
                current->right = new Node(rightData);
                q.push(current->right);
            }
        }
    }

    void preorderTraversal() {
        cout << "Preorder traversal: ";
        preorderHelper(root);
        cout << endl;
    }

    void inorderTraversal() {
        cout << "Inorder traversal: ";
        inorderHelper(root);
        cout << endl;
    }

    void postorderTraversal() {
        cout << "Postorder traversal: ";
        postorderHelper(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;

    cout << "Binary Tree Creation" << endl;
    cout << "--------------------" << endl;
    tree.createTree();

    cout << "\nTree Traversals" << endl;
    cout << "---------------" << endl;
    tree.inorderTraversal();
    tree.preorderTraversal();
    tree.postorderTraversal();

    return 0;
}
