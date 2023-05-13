#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct complex{
    int real;
    int imag;
    struct complex *next; //creating struct 
};

int main(){
    struct complex *head = NULL, *trav, *p , *prev;
    for(int i=1;i<=100;i++){
        p = (struct complex *)malloc(sizeof(struct complex)); //giving data acc to conditions mentioned in the question
        p->real = i*i;
        p->imag = pow(-1,i)*i*i;
        p->next = NULL;
        if(head==NULL) head = p;
        else prev->next = p;
        prev = p;
    }
    trav = head;
    printf("The complex pairs (real,imaginary) are :\n");
    printf("\n");
    while(trav!=NULL){
        printf("(%d,%d) ",trav->real,trav->imag); //traversing the list to print the elements
        trav = trav->next;
    }
    printf("\n");
}