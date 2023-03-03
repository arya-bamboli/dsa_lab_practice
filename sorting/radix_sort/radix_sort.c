#include <stdlib.h>
#include "radix_sort.h"

int getMax(int *a,int n){
    int res=a[0];
    for(int i=1;i<n;i++){
        if(res<a[i]){
            res=a[i];
        }
    }
    return res;
}

void radixSort(int *a, int n){
    int max = getMax(a,n);
    for(int pos=1;(max/pos)>0;pos*=10){
        countSort(a,pos,n);
    }
}
