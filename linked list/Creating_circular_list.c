#include <stdio.h>
#include <stdlib.h>
struct info{
    int data; //creating a struct inf0
    struct info *next;
};
int main(){
    int n;
    printf("Enter the number of data you want to enter: ");
    scanf("%d",&n);
    struct info *head=NULL, *p,*prev , *trav;
    printf("Enter the element of the list: ");
    for (int i = 0; i < n; i++)
    {
        p = (struct info *)malloc(sizeof(struct info));
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
    }
    trav = head;
    p->next = head;  //initialising next of last element to head to create a circular linked list
    printf("Printing the list after creating the circular list : ");
    while(trav->next!=head){
        printf("%d ",trav->data);
        trav = trav->next;
        if(trav == p) printf("%d ",trav->data);
    }
    printf("\n");
    
    return 0;
}