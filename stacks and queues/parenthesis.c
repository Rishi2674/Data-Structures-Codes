#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100

typedef struct
{
    char bracket[MAXSIZE];
    int top;
} stack;

void push(stack *s, char element)
{
    if (s->top == MAXSIZE - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    else
    {
        s->top++;
        s->bracket[s->top] = element;
    }
}

void pop(stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        s->top--;
    }
}

int main()
{
    stack s;
    s.top = -1;
    int n;
    printf("Enter the size of the string to be matched: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Enter a valid size\n");
        return 0;
    }
    printf("Enter the string of parenthesis to be matched: ");
    char string[n];
    scanf("%s", string);
    for (int i = 0; i < n; i++)
    {
        if (string[i] == '(' || string[i] == '{' || string[i] == '[')
        {
            push(&s, string[i]);
        }
        if (string[i] == ')' || string[i] == '}' || string[i] == ']')
        {
            if (s.top == -1)
            {
                printf("Unbalanced\n");
                return 0;
            }
            else
            {
                pop(&s);
            }
        }
    }
    if (s.top == -1)
        printf("Balanced\n");
    else
        printf("Unbalanced\n");
    return 0;
}
