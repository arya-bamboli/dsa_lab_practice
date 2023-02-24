#include "element.h"
#include "linked_list.h"
#include <stdlib.h>

LIST createNewList()
{
    LIST l = (LIST)malloc(sizeof(linked_list));
    l->count = 0;
    l->head = NULL;
    return l;
}

NODE createNewNode(Element data)
{
    NODE n = (NODE)malloc(sizeof(node));
    n->next = NULL;
    n->data = data;
    return n;
}

void insertNodeIntoList(NODE node, LIST list)
{
    NODE h = list->head;
    if(h == NULL){
        list->head = node;
    }else{
        while(h->next != NULL){
            h = h->next;
        }
        h->next = node;
    }
}

void removeFirstNode(LIST list)
{
    if (list->head != NULL)
    {
        NODE h = list->head;
        list->head = h->next;
        free(h);
    }
}

void destroyList(LIST list)
{
    free(list);
}
