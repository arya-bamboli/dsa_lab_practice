#include <stdlib.h>
#include <stdio.h>

int main(void){
    FILE *f1 = fopen("test1.txt", "r");
    FILE *f2 = fopen("test2.txt", "a");

    if (f1 == NULL){
        printf("Error opening test1!");
        exit(1);
    }

    if (f2 == NULL){
        printf("Error opening test2!");
        exit(1);
    }
    char c;
    while((c = fgetc(f1)) != EOF){
        fprintf(f2, "%c", c);
    }
    fclose(f1);
    fclose(f2);

    fclose(fopen("test1.txt", "w"));

    return 0;
}