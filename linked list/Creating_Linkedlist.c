#include <stdio.h>
#include <string.h>
struct stud
{
int roll; //entering rolllno
char name[30]; //creating char array for name
int age;
struct stud *next; //linking list to the next structure
};
int main(){
struct stud n1, n2, n3; //declaring variables
struct stud *p; //declaring a pointer variable of datatype struct stud
scanf ("%d %s %d", &n1.roll, n1.name, &n1.age); //taking data from user of three students
scanf ("%d %s %d", &n2.roll, n2.name, &n2.age);
scanf ("%d %s %d", &n3.roll, n3.name, &n3.age);
n1.next = &n2 ; //linking the structure
n2.next = &n3 ;
n3.next = NULL ;
/* Now traverse the list and print the
elements */
p = &n1 ; //pointing an array to the next list 
printf("\n");
while (p != NULL)
{
printf ("Rollno- %d Name- %s Age- %d\n",p->roll, p->name, p->age); //traversing the list
p = p->next; //moving the array to the next element using ->next 
}
return 0;
}
