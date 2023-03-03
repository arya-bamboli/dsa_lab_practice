#include <stdlib.h>
#include "radix_sort.h"
#include <stdio.h>

int main(){
    int n=10;
    int arr[10]={123,12,213,847,1019,678,126,659,9876,345};
    printf("Before sorting \n");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n After sorting \n");
    radixSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}