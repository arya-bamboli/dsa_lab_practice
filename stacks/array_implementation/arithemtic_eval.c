#include "stack_char.h"
#include <stdio.h>
#include <stdbool.h>

int main(){
    char exp[100];
    for(int i=0;i<100;i++){
        exp[i]=(char)'?';
    }
    printf("Enter the input expression");
    fgets(exp, sizeof(exp), stdin);
    printf("Input is taken");
    Stack *st = newstack();
    int i=0;
    while(i<100 && exp[i]!='?'){
        char x = exp[i];
        if(x==' ') continue;
        if(x=="*" || x=="/" || x=="+" || x=="-"){
            int op2 = top(st); 
            pop(st);
            int op1 = top(st);
            pop(st);
            if(x=="*"){
                push(st,op1*op2);
            }else if(x=="/"){
                push(st,op1/op2);
            }else if(x=="+"){
                push(st,op1+op2);
            }else{
                push(st,op1-op2);
            }
        }else{
            int num = x-'1';
            push(st,num);
        }
        i++;
    }
    printf("The answer is : %d", top(st));  
}