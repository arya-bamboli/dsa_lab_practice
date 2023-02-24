#include <stdio.h>

// Accessing a specific position in a file
int main()
{
    FILE* fp;
    fp = fopen("test.txt", "r");
 
    // Moving pointer to end
    fseek(fp, 0, SEEK_END);
 
    // Printing position of pointer
    printf("%ld", ftell(fp));
 
    return 0;
}