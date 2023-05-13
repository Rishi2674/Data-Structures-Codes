#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void printlist(struct node *p){ //function for printing the list 
    while(p!=NULL){
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

struct node *delete(struct node *head, int value){
    struct node *p , *q;
    p = head;
    q = p;
    while(p->next!=NULL){
        if(p->data==value){
            if(p==head) return head;
            else q->next = p->next;
            p->next = NULL;
            return p; //deleting the node and returning a pointer to that node
        }
        else{
            q=p;
            p = p->next;
            }
    }

}
 
struct node *insert_start(struct node *head , int element){
    struct node *p ;
    if(element == head->data) return head;
    p = (struct node *)malloc(sizeof(struct node));  //inserting the given node at start
    p->data = element;
    p->next = head;
    return p;
}

int  main(){
    int n;
    printf("Enter the number of data to be entered: ");
    scanf("%d",&n);
    struct node *p , *prev , *head = NULL;
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        p = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
    }
    printf("Initial list: \n");
    printlist(head);
    int ct;
    printf("Enter the number of elements to organise: ");
    scanf("%d",&ct); //taking input of how many elements to organise
    printf("\n");
    for(int i=0;i<ct;i++){
        int x;
        printf("Enter the element to organise and search: ");
        scanf("%d",&x);
        struct node *ptr = delete(head,x); //deleting the node with given element
        head = insert_start(head,x); //function calls and updating head at the same time
        printf("List after organising :\n");
        printlist(head);
        printf("\n");
    }
}




