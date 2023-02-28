#include "quick_sort.h"
#include <stdlib.h>

void swap(Person Ls[], int l, int r){
    Person temp = Ls[l];
    Ls[l] = Ls[r];
    Ls[r] = temp;
}

int threePart(Person Ls[], int lo, int hi, int pInd) {
    swap(Ls, pInd, hi - 1);
    int pivPos, lt, rt, mid, pv;
    lt = lo;
    rt = hi - 2;
    mid = lo;
    pv = Ls[hi - 1].height;
    while (mid <= rt) {
        if (Ls[mid].height < pv) {
            swap(Ls, lt, mid);
            lt++;
            mid++;
        }
        else if (Ls[mid].height > pv) {
            swap(Ls, mid, rt);
            rt--;
        }
        else {
            mid++;
        } 
    }
    swap(Ls, mid, hi - 1);
    return mid; 
}