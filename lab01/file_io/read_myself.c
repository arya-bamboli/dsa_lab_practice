#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fptr;
    fptr = fopen("read_myself.c", "r");
    if (fptr == NULL){
        printf("Error opening file!");
        exit(1);
    }
    char c;
    while ((c = fgetc(fptr)) != EOF){
        printf("%c", c);
    }
}