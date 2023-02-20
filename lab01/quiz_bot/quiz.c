#include <stdio.h>
#include "evaluate.h"

int main(void){
    char s[100];
    printf("Enter your answers as a string");
    scanf("%[^\n]s", s);

    int ans = evaluate(s);
    printf("Your score is %d", ans);
}