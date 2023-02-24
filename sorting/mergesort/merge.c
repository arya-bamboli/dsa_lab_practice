#include "mergesort.h"
#include <stdlib.h>

void merge(int A[], int st, int mid,int end){
    int *c = (int *)malloc(sizeof(int)*(end-st+1));
    mergeAux(A,st,mid,A,mid+1,end,c,0,end-st);
    for(int i=0;i<end-st+1;i++){
        A[st+i]=c[i];
    }
    free(c);
}
