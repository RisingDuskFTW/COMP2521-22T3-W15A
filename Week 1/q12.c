// Function to sum all the elements in a linked list

#include <stdio.h>
struct node {
    int value;
    struct node *next;
};

typedef struct node *List;

// Solution 1: Using a while loop
int sumList(List l) {
    struct node *curr = l;
    int sum = 0;
    while (curr != NULL) {
        sum += curr->value;
        curr = curr->next;
    }
    return sum;
}

// Solution 2: Using a for loop
int sumList(List l) {
    int sum = 0;
    for (struct node *curr = l; curr != NULL; curr = curr->next) {
        sum += curr->value;
    }
    return sum;
}
