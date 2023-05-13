#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int coeff;
    struct poly *next;
};

int main()
{
    int n;
    printf("Enter the degree of polynomial: ");
    scanf("%d", &n);
    struct poly *p1, *p2, *head1 = NULL, *head2 = NULL, *prev1, *prev2, *r, *q;
    printf("Enter the coefficients of polynomial 1: ");
    for (int i = 0; i < n; i++)
    {
        p1 = (struct poly *)malloc(sizeof(struct poly));
        scanf("%d", &p1->coeff);
        p1->next = NULL;
        if (head1 == NULL)
            head1 = p1;
        else
            prev1->next = p1;
        prev1 = p1;
    }
    r = head1;
    printf("Enter the coefficients of polynomial 2: ");
    for (int i = 0; i < n; i++)
    {
        p2 = (struct poly *)malloc(sizeof(struct poly));
        scanf("%d", &p2->coeff);
        p2->next = NULL;
        if (head2 == NULL)
            head2 = p2;
        else
            prev2->next = p2;
        prev2 = p2;
    }
    q = head2;
    struct poly *p, *head = NULL, *prev, *pf;
    for (int i = 0; i < n; i++)
    {
        p = (struct poly *)malloc(sizeof(struct poly));
        p->coeff = r->coeff + q->coeff;
        p->next = NULL;
        if (head == NULL)
            head = p;
        else
            prev->next = p;
        prev = p;
        r = r->next;
        q = q->next;
    }
    pf = head;
    printf("The coefficients of resultant polynomial are: ");
    while (pf != NULL)
    {
        printf("%d ", pf->coeff);
        pf = pf->next;
    }
    printf("\n");
}