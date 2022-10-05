// Count the number of nodes greater than a given value in a BSTree

#include <stdio.h>

typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

typedef struct BSTNode *BSTree;

int BSTreeCountGreater(BSTree t, int val) {
    if (t == NULL) {
        return 0;
    }

    if (t->value > val) {
        return 1 + BSTreeCountGreater(t->left, val) + BSTreeCountGreater(t->right, val);
    }
    return BSTreeCountGreater(t->right, val);
}
