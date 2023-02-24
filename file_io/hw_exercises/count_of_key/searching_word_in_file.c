#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
// Driver code
int main()
{
    FILE* ptr;
    char key[]="hobbit";
    char str[7];
    ptr = fopen("LOTR.txt", "r");
    if (ptr==NULL) {
        printf("file can't be opened \n");
    }
    printf("\n The length of the key %s is : %d \n",key,strlen(key));
    int cnt=0;
    while (fgets(str, 7, ptr) != NULL) {
        for(int i=0;i<strlen(str);i++){
            str[i]=tolower(str[i]);
        }
        if(strncmp(str,key,strlen(key))==0){
            cnt++;
        }
    }
    printf("The number of occurences of %s is : %d", key, cnt);
    fclose(ptr);
    return 0;
}