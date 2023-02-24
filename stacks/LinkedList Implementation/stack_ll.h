#ifndef STACKLL_H
#define STACKLL_H

#include <stdbool.h>
#include "element.h"

typedef struct node *link;

typedef struct stack_ll * Stack;

Stack create();

void push(Stack st, Element val);

bool pop(Stack st);

Element top(Stack st);

bool isEmpty(Stack st);

int sizeofStack(Stack st);
#endif