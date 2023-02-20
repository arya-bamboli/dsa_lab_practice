#include <stdio.h>
#include "count.h"




int main(void){
    char s[100];
    printf("enter a string: ");
    scanf("%[^\n]s", s);

    int n = count(s);
    printf("the number of vowels in the string is %d", n);
}