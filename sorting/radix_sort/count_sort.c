#include <stdlib.h>
#include "radix_sort.h"

void countSort(int *a, int pos, int n){
    int count[10]={0};
    int b[n];
    for(int i=0;i<n;i++){
        count[(a[i]/pos)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]=count[i-1]+count[i];
    }
    for(int i=n-1;i>=0;i--){
        b[--count[(a[i]/pos)%10]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=b[i];
    }
}