#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include "person.h"

void qs(Person Ls[], int lo, int hi);

int part(Person Ls[], int lo, int hi, int pInd);

int threePart(Person Ls[], int lo, int hi, int pInd);

#endif  