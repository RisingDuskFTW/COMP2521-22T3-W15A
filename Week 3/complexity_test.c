#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
int f1(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i % 3;
    }
    return sum;
}

// Time Complexity: O(log(n))
int f2(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + f(n / 3);
}

// Time Complexity: O(n * log(n))
int f3(int n) {
    int count = 0;
    int sum = 0;
    while (count < (n / 2)) {
        sum += f2(count);
        count++;
    }
    return sum;
}

void f4(int n) {
    // Time Complexity: O(n)
    f1(n) + f2(n);

    // Time Complexity: O(n * log(n))
    for (int i = 0; i < n; i++) {
        f2(i);
    }

    // Time Complexity: O((log(n))^2)
    for (int i = 0; i < n; i *= 2) {
        f2(i);
    }

    // Time Complexity: O(n^2 * log(n))
    for (int i = 0; i < n; i++) {
        f1(i);
        for (int j = 0; j < n; j++) {
            f2(j);
        }
    }

    // Time Complexity: O(n^2)
    for (int i = 0; i < n; i++) {
        f1(i);
        for (int j = 0; j < n; j *= 2) {
            f2(j);
        }
    }

    // Time Complexity: O(n^2 * (log(n))^2)
    for (int i = 0; i < n; i++) {
        f1(i);
        for (int j = 0; j < n; j *= 2) {
            f3(j);
        }
    }
}

// Heirachy of Time Complexity (most efficient to least efficient)
// O(1)
// O(log(n))
// O(n)
// O(n * log(n))
// O(n^2)
// O(n^2 * log(n))
// O(n^3)
// O(n^x)
// O(x^n)
// O(n!)
