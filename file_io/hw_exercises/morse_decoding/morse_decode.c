#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// array for morsecode of alphabets and integers
char *morseCode[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};

int getIndex(char buffer[])
{
    int i;
    for (i = 0; i < 36; i++)
    {
        if (strcmp(buffer, morseCode[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}

char getChar(int index)
{
    if (index < 26)
    {
        return (char)(index + 65);
    }
    else
    {
        return (char)(index + 22);
    }
}

int main()
{
    FILE *fptr = fopen("msg.txt", "r");
    char ans[100];
    int ind = 0;
    char c;
    char buffer[10];
    while (fgetc(fptr) != EOF)
    {
        fseek(fptr, -1, SEEK_CUR);

        fscanf(fptr, "%[^ ]", buffer);
        printf("%s",buffer);
        printf(" ");
        if (buffer[0] == '/')
        {
            ans[ind++] = ' ';
        }
        else
        {
            int index = getIndex(buffer);
            if (index != -1)
            {
                ans[ind++] = getChar(index);
            }
        }
        fseek(fptr, 1, SEEK_CUR);
    }
    printf("\n %s",ans);
}