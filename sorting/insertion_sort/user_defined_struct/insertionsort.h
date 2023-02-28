#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

typedef struct Person *Person;

void insertionSort(Person A[],int n);

void insertInOrder(int v, Person A[], int last);

#endif  