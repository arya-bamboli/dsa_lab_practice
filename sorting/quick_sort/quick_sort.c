#include "quick_sort.h"

void qs(Person Ls[], int lo, int hi) {
    if (lo < hi) {
        // int pInd = qselect(Ls, hi-lo+1,1); // Ls[p] is the pivot
        int pInd=0;
        int p = part(Ls, lo, hi, pInd); // Ls[p] is the pivot
        /*
        (Ls[j]<=Ls[p] for j in lo..pPos-1) and
        (Ls[j]>Ls[p] for j in pPos+1..hi)
        */
        qs(Ls, lo, p - 1);
        qs(Ls, p + 1, hi);
    } 
}