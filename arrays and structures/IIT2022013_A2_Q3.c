/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 2 Question 2*/
#include <stdio.h>
#include <stdlib.h>
struct cricket{
    char name[50];
    int runs;
    float avg;
};

int main(){
    int n;
    printf("Enter the number of cricketers: ");
    scanf("%d",&n);
    struct cricket *person;
    person = (struct cricket *)malloc(n*sizeof(struct cricket));
    for(int i=0;i<n;i++){
        printf("Enter name of cricketer %d: ",i+1);
        scanf("%s",(person+i)->name);
        printf("Enter runs of cricketer %d: ",i+1);
        scanf("%d",&((person+i)->runs));
        printf("Enter average of cricketer %d: ",i+1);
        scanf("%f",&((person+i)->avg));
        printf("\n");
    }
    printf("---------------------------------------------------------------\n");
    for(int i=0;i<n;i++){
        printf("Name of cricketer %d is : %s\n",i+1,(person+i)->name);
        printf("total runs of cricketer %d is : %d\n",i+1,(person+i)->runs);
        printf("Average of cricketer %d is : %f\n",i+1,(person+i)->avg);
        printf("\n");
        
    }
    return 0;


}