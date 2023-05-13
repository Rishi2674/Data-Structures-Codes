#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *insert_start(struct node *r,int value){
    struct node *p;
    p = (struct node*)malloc(sizeof(struct node)); //insert at the start
    p->data = value;
    p->next = r; //making the new pointer head
    return p;
}

struct node *insert_end(struct node *r,int value){
    struct node *p , *q;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = value;
    p->next = NULL;
    if(r==NULL) return p;
     q=r;
    while(q->next!=NULL) q= q->next;
    q->next =p; //inserting at the end 
    return r;
}

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    struct node *head = NULL, *p, *prev;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
    }
    printf("Enter the values of start and end: ");
    int start,end;
    scanf("%d %d",&start,&end);
    struct node *head_start = insert_start(head,start); //function call to insert at the start
    struct node *head_last = insert_end(head_start,end); //function call to insert at the end
    struct node *trav = head_last;
    printf("Final List is : ");  //traversing and viewing the final list
    while(trav!=NULL){
        printf("%d ",trav->data);
        trav = trav->next;
    }
    printf("\n");
    return 0;
}