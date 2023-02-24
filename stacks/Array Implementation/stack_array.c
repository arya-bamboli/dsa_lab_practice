#include <stdlib.h>
#include <stdbool.h>
#include "stack_char.h"

#define Max_Size 1000

struct Stack{
    int top;
    char data[Max_Size];
};

Stack *newstack(){
    Stack *stack =  (Stack *)malloc(sizeof(Stack));
    if(stack!=NULL){
        stack->top=-1;
    }
    return stack;
}

bool push(Stack *stack, int ele){
    if(stack->top==Max_Size-1){
        return false;
    }else{
        stack->top++;
        stack->data[stack->top]=ele;
        return true;
    }
}

bool pop(Stack *stack){
    if(stack->top==-1) return false;
    else{
        stack->top--;
        return false;
    }
}


int top(Stack *stack){
    int ele = stack->data[stack->top];
    return ele;
}
