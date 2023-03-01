#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "person.h"

int qselect(Person Ls[], int n, int k);

void qs(Person Ls[], int lo, int hi);

void qsort_iter_attempt1(Person Ls[], int lo, int hi);

int part(Person Ls[], int lo, int hi, int pInd);

int threePart(Person Ls[], int lo, int hi, int pInd);

#endif  