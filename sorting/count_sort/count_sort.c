#include <stdlib.h>

int* counting_sort(int* A, int* B, int k, int n) {
    // Initialize array C with all 0s
    int C[k];
    for (int i = 0; i < k; i++){ 
        C[i] = 0; 
    }
    // Count the number of times each element occurs in A and store it in C
    for (int j = 0; j < n; j++){ 
        C[A[j]]++;
    }
    // Place the elements of A in B in the correct position
    // by computing the running sum
    for (int i = 1; i < k; i++){ 
        C[i] = C[i] + C[i - 1];
    }
    for (int j = n - 1; j >= 0; j--){ 
        B[--C[A[j]]] = A[j];
    }
    return B; 
}