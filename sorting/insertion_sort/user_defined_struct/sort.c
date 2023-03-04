#include "insertionsort.h"
// #include "person.h"
#include<stdlib.h>
#include<stdio.h>

Person iftoe (int id, char *name, int age, int height, int weight){
    Person p;
    p.id=id;
    p.age=age;
    p.height=height;
    p.name=name;
    p.weight=weight;
    return p;
}
int main(){
    Person arr[5];
    arr[0]=iftoe(1,"A",20,160,59);
    arr[1]=iftoe(2,"B",23,159,59);
    arr[2]=iftoe(3,"C",24,130,59);
    arr[3]=iftoe(4,"D",21,159,59);
    arr[4]=iftoe(5,"E",20,171,59);
    printf("Before sorting \n");
    for(int i=0;i<5;i++){
        printf("%d %s %d %d %d \n", arr[i].id ,arr[i].name, arr[i].age, arr[i].height, arr[i].weight);
    }
    insertionSort(arr,5);
    printf("After sorting \n");
    for(int i=0;i<5;i++){
        printf("%d %s %d %d %d \n", arr[i].id ,arr[i].name, arr[i].age, arr[i].height, arr[i].weight);
    }
    return 0;
}
