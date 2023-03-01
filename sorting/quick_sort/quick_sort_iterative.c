#include "quick_sort.h"
#include "person.h"

void qsort_iter_attempt1(Person Ls[], int lo, int hi){
    while (lo < hi) {
        // int pInd = qselect(Ls, hi-lo+1,0); 
        int pInd = 0;
        int p = part(Ls, lo, hi, pInd);
        qsort(Ls, lo, p - 1);
        lo = p + 1; 
    }
}