#include <stdlib.h>

int part(int Ls[], int lo, int hi, int pInd){
    swap(Ls, pInd, lo);
    int pivPos, lt, rt, pv;
    lt = lo + 1;
    rt = hi;
    pv = Ls[lo];
    while (lt < rt) {
        for (; lt <= hi && Ls[lt] <= pv; lt++);
        // Ls[j]<=pv for j in lo..lt-1
        for (; Ls[rt] > pv; rt--);
        // Ls[j]>pv for j in rt+1..hi
        if (lt < rt) {
            swap(Ls, lt, rt);
            lt++;
            rt--;
        }
    }
    if (Ls[lt] < pv && lt <= hi)
        pivPos = lt;
    else
        pivPos = lt - 1;
    swap(Ls, lo, pivPos);
    return pivPos;
}