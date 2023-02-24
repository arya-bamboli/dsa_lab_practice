#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
    char str[10000];
    ptr = fopen("msg.txt", "r");

    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    while (!feof(ptr)) {
        while (fgets(str, 10000, ptr) != NULL) {
            printf("%s ** New String **", str);
        }
    }
    fclose(ptr);
    return 0;
}