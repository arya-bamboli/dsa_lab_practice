#include "insertionsort.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct Person Person;
struct Person{
    int id;
    char *name;
    int age;
    int height;
    int weight;
};

int main(){
    Person arr[5];
    arr[0]=*createPerson(1,"A",20,160,59);
    arr[1]=*createPerson(2,"B",23,159,59);
    arr[2]=*createPerson(3,"C",24,130,59);
    arr[3]=*createPerson(4,"D",21,159,59);
    arr[4]=*createPerson(5,"E",20,171,59);
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

Person *createPerson(int id, char *name, int age, int height, int weight){
    Person *pr = (Person*)malloc(sizeof(struct Person));
    pr->id=id;
    pr->name=name;
    pr->age=age;
    pr->height=height;
    pr-> weight=weight;
    return pr;
};