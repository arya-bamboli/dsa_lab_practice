#include "quick_sort.h"

void qs(Person Ls[], int lo, int hi) {
    if (lo < hi) {
        // int p = pivot(Ls, lo, hi); // Ls[p] is the pivot
        int p=0;
        p = part(Ls, lo, hi, p); // Ls[p] is the pivot
        /*
        (Ls[j]<=Ls[p] for j in lo..pPos-1) and
        (Ls[j]>Ls[p] for j in pPos+1..hi)
        */
        qs(Ls, lo, p - 1);
        qs(Ls, p + 1, hi);
    } 
}