// Count the number of internal (non-leaf) nodes in a BSTree

#include <stdio.h>

typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

typedef struct BSTNode *BSTree;

int BSTreeCountInternal(BSTree t) {
    if (t == NULL) {
        return 0;
    }

    // Is a leaf node
    if ((t->left == NULL) && (t->right == NULL)) {
        return 0;
    }

    // Not a leaf node
    return 1 + BSTreeCountInternal(t->left) + BSTreeCountInternal(t->right);
}
