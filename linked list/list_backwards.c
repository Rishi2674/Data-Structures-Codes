#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void back(struct node *head)
{
    struct node *ptr = head;
    if (ptr->next == NULL)
    {
        printf("%d ", ptr->data);  //printing the last element first
        return;
    }
    else
    {
        back(ptr->next);
    }
    printf("%d ", ptr->data); //also printing the value of the element as function is called recursively
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    struct node *head = NULL, *p, *prev;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node)); //taking input from user
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
    }
    printf("The list printed backwards is: \n");
    back(head);
    printf("\n");
    return 0;
}