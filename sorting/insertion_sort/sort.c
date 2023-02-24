#include "insertionsort.h"
#include<stdlib.h>
#include<stdio.h>

int main(){
    int arr[5];
    arr[0]=3;arr[1]=3;arr[2]=1;arr[3]=9;arr[4]=0;
    printf("Before sorting \n");
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    insertionSort(arr,5);
    printf("After sorting \n");
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}