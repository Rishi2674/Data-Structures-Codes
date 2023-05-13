/*Upadhyay Rishi Piyushkumar IIT2022013
Assignment on stack Question 1*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXSIZE 100

typedef struct{
    int prime[MAXSIZE];
    int top;
}stack;

void push(stack *s , int element){
    if((*s).top == MAXSIZE -1){
        printf("Stack Overflow\n");
        return;
    }
    else{
        (*s).top++;
        (*s).prime[(*s).top] = element;
    }
}

int pop( stack *s ){
    if(s->top==-1){
        printf("Stack Underflow\n");
        return 0;
    }
    else{
        return (s->prime[(s->top)--]);
    }
}

int prime(int element){
    for(int i=2;i<=sqrt(element);i++){
        if(element%i==0) return 0;
    }
    return 1;
}

int main(){
    stack s;
    s.top = -1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The number of prime divisors listed in ascending order are : ");
    for(int i=2;i<=n;i++){
        if(n%i==0){
           if (prime(i)) {
            push(&s,i);
            printf("%d ",pop(&s));
           }
        }
    }
    printf("\n");
    return 0;
}
