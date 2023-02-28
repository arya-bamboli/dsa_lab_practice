#include "insertionsort.h"
#include <stdlib.h>

void insertionSort(Person A[],int n){
    for(int j = 1; j < n; j++)
    {
        insertInOrder(A[j].height, A, j);
    }
}

void insertInOrder(int v, Person A[], int last) {
    int j = last - 1;
    while(j >= 0 && v < A[j].height){ 
        A[j+1] = A[j];
        j--;
    }
    A[j+1] = v; 
}