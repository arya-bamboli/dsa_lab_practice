#include "quick_sort.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/time.h>

Person iftoe (int id, char *name, int age, int height, int weight);
int main(){
    Person arr[1000];
    FILE* fp = fopen("dat1000.csv", "r");
    
    if (!fp)
        printf("Can't open file\n");
 
    else {
        // Here we have taken size of
        // array 1024 you can modify it
        char buffer[1024];
 
        int row = 0;
        int column = 0;
        int id; 
        char *name; 
        int age; 
        int height; 
        int weight;
        while (fgets(buffer, 1024,  fp)) {
            column = 0;
            row++;
            char* value = strtok(buffer, ",");

            while (value!=NULL) {
                // Column 1
                if (column == 0) {
                    id=atoi(value);
                }
 
                // Column 2
                if (column == 1) {
                    name=value;
                }
 
                // Column 3
                if (column == 2) {
                    age=atoi(value);
                }

                if (column == 3) {
                    height=atoi(value);
                }
                
                if (column == 4) {
                    weight=atoi(value);
                }

                value = strtok(NULL, ",");
                column++;
            }
            arr[row-1]=iftoe(id,name,age,height,weight);
        }
        fclose(fp);
    }
    // printf("%d \n", arr[999].id);
    // printf("%s", arr[?].name);
    struct timeval t1, t2;
    double time_taken;
    gettimeofday(&t1, NULL);
    qs(arr,0,999);
    gettimeofday(&t2, NULL);
    time_taken = (t2.tv_sec - t1.tv_sec) * 1e6;
    time_taken = (time_taken + (t2.tv_usec - t1.tv_usec)) * 1e-6;
    printf("The recursive approach took %f seconds to execute\n", time_taken);
    // for(int i=0;i<1000;i++){
    //     printf("%d %s %d \n", arr[i].id, arr[i].name, arr[i].height);
    // }
    // t1, t2;
    // time_taken;
    gettimeofday(&t1, NULL);
    qsort_iter_attempt1(arr,0,999);
    gettimeofday(&t2, NULL);
    time_taken = (t2.tv_sec - t1.tv_sec) * 1e6;
    time_taken = (time_taken + (t2.tv_usec - t1.tv_usec)) * 1e-6;
    printf("The iterative approach took %f seconds to execute\n", time_taken);
    return 0;
}

Person iftoe (int id, char *name, int age, int height, int weight){
    Person p;
    p.id=id;
    p.age=age;
    p.height=height;
    p.name=name;
    p.weight=weight;
    return p;
}