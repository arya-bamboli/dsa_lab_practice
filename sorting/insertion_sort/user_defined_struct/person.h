#ifndef ELEMENT_H
#define ELEMENT_H

struct Person {
    int id; 
    char *name; 
    int age; 
    int height; 
    int weight;
};
typedef struct Person Person;
#endif  