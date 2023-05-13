#include <stdio.h>
#include <stdlib.h>
#define size 100

struct lifo{
    int data;
    struct lifo *next;
};
typedef struct lifo stack;

void create(stack **top){
    *top = NULL;
}

int push(stack **top , int value){
    stack *new;
    new = (stack *)malloc(sizeof(stack));
    if(new==NULL){
        printf("stack full\n");
        exit(-1);
    }
    else{
        new->next = *top;
        new->data = value;
        (*top) = new;
    }
}

int pop(stack **top){
    stack *p;
    int t;
    if(*top==NULL){
        printf("Stack Empty\n");
        exit(-1);
    }
    else{
        int t = (*top)->data;
        p = *top;
        (*top) = (*top)->next;  
        free(p);
        return t;
    }
}