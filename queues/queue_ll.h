#ifndef QUEUELL_H
#define QUEUELL_H

#include <stdbool.h>
#include "element.h"

typedef struct node *link;

typedef struct queue_ll * Queue;

Queue create();

void push(Queue q, Element val);

void enque(Queue q, Element val);

bool deque(Queue q);

bool pop(Queue q);

Element top(Queue q);

bool isEmpty(Queue q);

int sizeofQueue(Queue q);

void freeQueue(Queue q);

link createNewLink(Element val);
#endif