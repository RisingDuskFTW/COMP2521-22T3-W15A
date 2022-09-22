// Recursive function to delete all even numbers from a linked list

#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;

// Recursive Solution
List listDeleteEvens(List l) {

    // base case
	if (l == NULL) {
		return NULL;
	}
    
    List restOfList = l->next;
    // recursive case
    if (l->data % 2 == 0) {
		free(l);
		return listDeleteEvens(restOfList);
	}
    l->next = listDeleteEvens(restOfList);
    return l;
}
