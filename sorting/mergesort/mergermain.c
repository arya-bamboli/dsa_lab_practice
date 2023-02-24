#include<stdlib.h>
#include<stdio.h>
#include "mergesort.h"

int main(){
    int arr[5];
    // for(int i=0;i<5;i++){
    //     // printf("Please enter the %d number: ",i+1);
    //     // scanf("%d",&arr[i]);
    //     arr[i]=
    // }
    arr[0]=3;arr[1]=5;arr[2]=1;arr[3]=9;arr[4]=0;
    mergeSort(arr,0,5);
    printf("After sorting \n");
    for(int i=0;i<5;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}