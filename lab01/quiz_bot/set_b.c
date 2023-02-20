#include "evaluate.h"

char *s = "abdabdcaca";

int evaluate(char* string){
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        char character = tolower(string[i]);
        if (character == s[i])
        {
            count += 4;
        } else count--;
    }
    return count;
}