# include <stdio.h>
# include <stdlib.h>
#include <string.h>

struct node{
    int data;
    struct node *next;

};

int main(){
    int n1,n2;
    printf("Enter the number of elements in list 1 and list 2 :");
    scanf("%d %d",&n1,&n2);
    struct node *p1 , *p2, *head1= NULL , *head2 =NULL, *trav , *prev1 ,*prev2 ;
    printf("Enter the elements of list 1: "); //entering data into list 1
     for(int i=0;i<n1;i++){
        p1 = (struct node *)malloc(sizeof(struct node));
        scanf("%d",&p1->data);
        p1->next = NULL;
        if(head1 == NULL) head1=p1;
        else prev1->next = p1;
        prev1 = p1;
    }
    printf("Enter the elements of list 2: ");
     for(int i=0;i<n2;i++){
        p2 = (struct node *)malloc(sizeof(struct node)); //entering data into list 2
        scanf("%d",&p2->data);
        p2->next = NULL;
        if(head2 == NULL) head2=p2;
        else prev2->next = p2;
        prev2 = p2;
    }
    p1->next = head2;  //condition for concatenation
    trav = head1;
    printf("Concatenated List: ");
    while(trav!=NULL){    //traversing the concatenated list
        printf("%d ",trav->data);
        trav = trav->next;
    }
    printf("\n");
   return 0;
}