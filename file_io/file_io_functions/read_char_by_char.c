#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("test.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);
 
    // Closing the file
    fclose(ptr);
    return 0;
}



-------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char ch;
    ptr = fopen("test.txt", "r");
 
    if (NULL == ptr) {
        printf("file can't be opened \n");
    }
 
    printf("content of this file are \n");
 
    while (!feof(ptr)) {
        ch = fgetc(ptr);
        printf("%c", ch);
    }
    fclose(ptr);
    return 0;
}