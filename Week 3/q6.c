// Program to print the permutation of an array, given the positions of each
// element to be printed 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUMS 3

void printPermutation(char **A, int *P, int n);
void printPermutation2(char **A, int *P, int n);

int main(int argc, char **argv) {
    char **A = malloc(sizeof(char *) * NUMS);
    A[0] = "cat";
    A[1] = "dog";
    A[2] = "mouse";
    int P[NUMS] = {2, 3, 1};
    printPermutation(A, P, NUMS);
    printf("==========\n");
    printPermutation2(A, P, NUMS);
    return 0;
}

void printPermutation(char **A, int *P, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (P[j] == i) {
                printf("%s\n", A[j]);
            }
        }
    }
}

void printPermutation2(char **A, int *P, int n) {
    char **T = malloc(sizeof(char *) * NUMS);
    for (int i = 0; i < n; i++) {
        T[i] = malloc(1000);
    }

    for (int i = 0; i < n; i++) {
        strcpy(T[P[i] - 1], A[i]);
    }

    // Safer to use `T[P[i] - 1] = strdup(A[i])` instead of lines 37-43

    for (int i = 0; i < n; i++) {
        printf("%s\n", A[i]);
    }
}
