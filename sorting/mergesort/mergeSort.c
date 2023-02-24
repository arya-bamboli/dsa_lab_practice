#include "mergesort.h"
#include <stdlib.h>

void mergeSort(int A[],int st, int end){
    if(end-st<1) return;

    int mid=(st+end)/2;
    mergeSort(A,st,mid);
    mergeSort(A,mid+1,end);
    merge(A,st,mid,end);
}

