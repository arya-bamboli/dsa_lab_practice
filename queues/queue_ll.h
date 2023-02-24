#ifndef QUEUELL_H
#define QUEUELL_H

#include <stdbool.h>
#include "element.h"

typedef struct node *link;

typedef struct queue_ll * Queue;

Queue create();

void push(Queue st, Element val);

void pushRear(Queue st, Element val);

bool pop(Queue st);

Element top(Queue st);

bool isEmpty(Queue st);

int sizeofStack(Queue st);

void freeStack(Queue st);

link createNewLink(Element val);
#endif