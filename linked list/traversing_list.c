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
struct stud *p , *head; //declaring a pointer variable of datatype struct stud
scanf ("%d %s %d", &n1.roll, n1.name, &n1.age); //taking data from user of three students
scanf ("%d %s %d", &n2.roll, n2.name, &n2.age);
scanf ("%d %s %d", &n3.roll, n3.name, &n3.age);
head = &n1;
p = head;
while(p!=NULL){
    p = p->next; //traversing a list using head and declaring a pointer p
} 

return 0;
}
