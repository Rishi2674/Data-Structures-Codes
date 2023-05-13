#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print_backwards(struct node *head){
    struct node *ptr =  head;
    if(p->next==NULL){
        printf("%d ",ptr->data);
        return;
    }
    else{
        print_backwards(ptr->next);
    }
    printf("%d ",ptr->data);
}

void insert_asc(struct node *head, int element){
    struct node *new, *p , *q;
    new = (struct node *)malloc(sizeof(struct node));
    new->data = element;
    new->next = NULL;
    p = head ; q =p;
    while(p->next!=NULL){
        if(p->data>= element){
            if(p==head) {
                new->next = head;
                return new;
            }
            else{
                new->next = p;
                q->next = new;
                return head;
            }
            q = p;
            p = p->next;
        } 
    }
    if(r==NULL)  return new;
    q->next = new;
    new->next = NULL;
    return head;

}

void reverse_list(struct node *head);
 
void insert_start(struct node *head , int element){
    struct node *p ;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = element;
    p->next = head;
    return p;
}

void insert_end(struct node *head, int value){
    struct node *p , *q;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;
    if(head == NULL) return p;
    else{
        q = head ;
        while(q->next!=NULL) q= q->next;
        q->next =  p;
        return head;
    }
}

void delete(struct node *head, int value){
    struct node *p , *q;
    p = head;
    q = p;
    while(p->next!=NULL){
        if(p->data==value){
            if(p==head) head = p->next;
            else q->next = p->next;
            p->next = NULL;
            return p;
        }
        else{
            q=p;
            p = p->next;
            }
    }

}



