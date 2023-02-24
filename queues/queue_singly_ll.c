#include <stdlib.h>
#include <stdbool.h>
#include "element.h"
#include "queue_ll.h"

struct node{
    Element ele;
    link next;
};

struct queue_ll{
    int count;
    link top;
};

link createNewLink(Element val){
    link newnode = (link)malloc(sizeof(struct node));
    newnode->ele=val;
    newnode->next=NULL;
    return newnode;
}

Queue create(){
    Queue mylist = (Queue)malloc(sizeof(struct queue_ll));
    mylist->count=0;
    mylist->top=NULL;
    return mylist; 
}

void push(Queue q, Element val){
    link newnode = createNewLink(val);
    q->count++;
    if(q->count==0){
       q->top=newnode;
    }else{
        newnode->next=q->top;
        q->top=newnode;
    }
}

void enque(Queue q, Element val){
    link newnode = createNewLink(val);
    link tp=q->top;
    while(tp->next!=NULL){
        tp=tp->next;
    }
    tp->next=newnode;
    q->count++;
}

bool deque(Queue q){
    if(q->count==0) return false;
    else{
        link temp = q->top;
        if(temp->next==NULL){
            q->top=NULL;
        }else{
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            link tp = temp->next;
            temp->next=NULL;
            free(tp);
        }
        return true;
    }
}

bool pop(Queue q){
    if(q->count==0) return false;
    else{
        link temp = q->top;
        q->top=temp->next;
        temp->next=NULL;
        q->count--;
        free(temp);
        return true;
    }
}

Element top(Queue q){
    return q->top->ele;
}

bool isEmpty(Queue q){
    return (q->count!=0);
}

int sizeofQueue(Queue q){
    return q->count;
}

void freeQueue(Queue st){
    free(st);
}