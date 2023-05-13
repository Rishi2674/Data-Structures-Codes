#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
 
int main(){
    int n;
    printf("Enter the no of elements in a list: ");
    scanf("%d",&n);
    struct node *head=NULL , *p  , *q , *prev;
    for(int i=0;i<n;i++){
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next = NULL;
        if(head == NULL) head=p;
        else prev->next = p;
        prev = p;
    }
    q = head;
    int count=0;
    while(q->next!=NULL){
        count++;
        q = q->next;
    }


    printf("The total elements are : %d\n",count);
    return 0;
}