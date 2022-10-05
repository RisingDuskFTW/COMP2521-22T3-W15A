// Find the height of a BST, given the root node

#include <stdio.h>

typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

typedef struct BSTNode *BSTree;

int max(int x, int y);

int BSTreeHeight(BSTree t) {
    if (t == NULL) {
        return 0;
    }

    int leftHeight = BSTreeHeight(t->left);
    int rightHeight = BSTreeHeight(t->right);

    return 1 + max(leftHeight, rightHeight);
}

// Find the maximum of two numbers
int max(int x, int y) {
    // Using if condition
    if (x > y) {
        return x;
    } else {
        return y;
    }

    // Using ternary operator
    int larger = (x > y) ? x : y;
    return larger;
}
