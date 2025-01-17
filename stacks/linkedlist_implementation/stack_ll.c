#include <stdlib.h>
#include <stdbool.h>
#include "element.h"
#include "stack_ll.h"

struct node{
    Element ele;
    link next;
};

struct stack_ll{
    int count;
    link top;
};

link createNewLink(Element val){
    link newnode = (link)malloc(sizeof(struct node));
    newnode->ele=val;
    newnode->next=NULL;
    return newnode;
}

Stack create(){
    Stack mylist = (Stack)malloc(sizeof(struct stack_ll));
    mylist->count=0;
    mylist->top=NULL;
    return mylist; 
}

void push(Stack st, Element val){
    link newnode = createNewLink(val);
    st->count++;
    if(st->count==0){
        st->top=newnode;
    }else{
        newnode->next=st->top;
        st->top=newnode;
    }
}

void pushRear(Stack st, Element val){
    link newnode = createNewLink(val);
    link tp = st->top;
    while(tp->next!=NULL){
        tp=tp->next;
    }
    tp->next=newnode;
    st->count++;
}

bool pop(Stack st){
    if(st->count==0) return false;
    else{
        link temp = st->top;
        st->top=temp->next;
        temp->next=NULL;
        st->count--;
        free(temp);
        return true;
    }
}

Element top(Stack st){
    return st->top->ele;
}

bool isEmpty(Stack st){
    return (st->count!=0);
}

int sizeofStack(Stack st){
    return st->count;
}

void freeStack(Stack st){
    free(st);
}