#include <stdio.h>
#include <stdlib.h>

struct fifo{
    int value;
    struct fifo *next;
};
typedef struct fifo queue;
queue  *front , *rear;

void createq(queue **front , queue **rear){
    *front = NULL;
    *rear = NULL;
}

void enqueue (queue **front, queue **rear, int x)
{
    queue *ptr;
    ptr = (queue *) malloc(sizeof(queue));
    if (*rear == NULL) 
    {
        *front = ptr;
        *rear = ptr;
        ptr->value = x;
        
        ptr->next = NULL;
    }
    else /* Queue is not empty */
    {
        (*rear)->next = ptr;
        *rear = ptr;
        ptr->value = x;
        ptr->next = NULL;
    }
}

int dequeue (queue **front, queue **rear)
{
    queue *old; int k;
    if (*front == NULL) 
        printf ("\n Queue is empty");
    else if (*front == *rear) /* Single element */
    {
        k = (*front)->value;
        free (*front); front = rear = NULL;
        
        return (k);
    }
    else
    {
        k = (*front)->value; old = *front;
        *front = (*front)->next;
        free (old);
        return (k);
    }
}

int isempty (queue *front)
{
    if (front == NULL)
        return (1);
    else
        return (0);
    
}

int main()
{
    queue *Af, *Ar;
    createq (&Af, &Ar);
    enqueue (&Af,&Ar,10);
    enqueue (&Af,&Ar,20);
    enqueue(&Af,&Ar,30);
    printf("After dequeuing : ");
    printf ("%d %d \n",dequeue (&Af,&Ar),dequeue(&Af,&Ar));
    if (isempty(Af))
        printf ("\n Q is empty");
}