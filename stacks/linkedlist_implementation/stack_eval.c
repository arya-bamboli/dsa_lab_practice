#include "stack_ll.h"

#include <stdio.h>
#include <stdbool.h>

int main(){
    Stack st = create();
    Element ele;
    ele.int_value=1;
    ele.float_value=1.00;
    push(st,ele);  
    printf("The current size of stack is :%d \n",sizeofStack(st));
    pop(st);
    printf("The new size is :%d ", sizeofStack(st));
}