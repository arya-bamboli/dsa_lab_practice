#ifndef STACKCHAR_H
#define STACKCHAR_H

#include <stdbool.h>
typedef struct Stack Stack; 

Stack *newstack();

bool push(Stack *stack, int ele);

int top(Stack *stack);

bool pop(Stack *stack);

#endif  