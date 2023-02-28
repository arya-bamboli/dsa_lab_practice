#include "quick_sort.h"
#include <stdlib.h>

void swap(Person Ls[], int l, int r){
    Person temp = Ls[l];
    Ls[l] = Ls[r];
    Ls[r] = temp;
}
int part(Person Ls[], int lo, int hi, int pInd){
    swap(Ls, pInd, lo);

    int pivPos, lt, rt, pv;
    lt = lo + 1;
    rt = hi;
    pv = Ls[lo].height;
    while (lt < rt) {
        for (; lt <= hi && Ls[lt].height <= pv; lt++);
        // Ls[j]<=pv for j in lo..lt-1
        for (; Ls[rt].height > pv; rt--);
        // Ls[j]>pv for j in rt+1..hi
        if (lt < rt) {
            swap(Ls, lt, rt);
            lt++;
            rt--;
        }
    }
    if (Ls[lt].height < pv && lt <= hi)
        pivPos = lt;
    else
        pivPos = lt - 1;       
    
    swap(Ls, lo, pivPos);
    return pivPos;
}