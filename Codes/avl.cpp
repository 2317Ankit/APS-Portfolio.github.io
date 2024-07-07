#include <iostream>
#include <algorithm>

using namespace std;

struct Review {
    int rating;
    string reviewText;

    Review(int r, string t) : rating(r), reviewText(t) {}
};

struct Node {
    Review review;
    Node* left;
    Node* right;
    int height;

    Node(Review r) : review(r), left(nullptr), right(nullptr), height(1) {}
};

int height(Node* N) {
    if (N == nullptr)
        return 0;
    return N->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* rightRotate(Node* y) {
    Node* x = y->left;
    Node* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

int getBalance(Node* N) {
    if (N == nullptr)
        return 0;
    return height(N->left) - height(N->right);
}

Node* insert(Node* node, Review review) {
    if (node == nullptr)
        return new Node(review);

    if (review.rating < node->review.rating)
        node->left = insert(node->left, review);
    else if (review.rating > node->review.rating)
        node->right = insert(node->right, review);
    else
        return node;

    node->height = 1 + max(height(node->left), height(node->right));

    int balance = getBalance(node);

    if (balance > 1 && review.rating < node->left->review.rating)
        return rightRotate(node);

    if (balance < -1 && review.rating > node->right->review.rating)
        return leftRotate(node);

    if (balance > 1 && review.rating > node->left->review.rating) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    if (balance < -1 && review.rating < node->right->review.rating) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    return node;
}

void preOrder(Node* root) {
    if (root != nullptr) {
        cout << root->review.rating << ": " << root->review.reviewText << endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main() {
    Node* root = nullptr;

    root = insert(root, Review(10, "Great product!"));
    root = insert(root, Review(20, "Excellent quality!"));
    root = insert(root, Review(30, "Very satisfied!"));
    root = insert(root, Review(40, "Good value for money."));
    root = insert(root, Review(50, "Fast shipping."));
    root = insert(root, Review(25, "Highly recommended!"));

    cout << "Preorder traversal of the constructed AVL tree is: \n";
    preOrder(root);

    return 0;
}
