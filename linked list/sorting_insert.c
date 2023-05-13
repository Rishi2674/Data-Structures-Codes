#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *insert_asc(struct node *r,int value){
    struct node *new,*p,*q;
    new = (struct node*)malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;
    p=r; q=p;
    while(p!=NULL){
        if(p->data>=value){
            if(p==r) {
                new->next =r;
                return new;
            }
            else{
                new->next = p;
                q->next = new;
                return r;
            }
        }
        q=p;
        p = p->next;
    }
    if(r==NULL) return new;
    else q->next = new;
    return r;
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    struct node *head = NULL, *q;
    while(n--){
        int x;
        scanf("%d",&x);
        head = insert_asc(head,x);
    }
    q= head;
    while(q!=NULL){
        printf("%d",q->data);
        q=q->next;
        
    }
}
