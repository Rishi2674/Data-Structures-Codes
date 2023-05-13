/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 2 Question 2*/
#include <stdio.h>
#include <stdlib.h>
 struct studinfo{
    char name[50];
    int rollno;
    float cgpa;
 };

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    float maxcg = 0;
    float mincg = 111;
    struct studinfo student[n];
    struct  studinfo mininfo,maxinfo;
    for(int i =0;i<n;i++){
        printf("Enter the name of %d student: ",i+1);
        scanf("%s",student[i].name);
        printf("Enter the rollno of %d student: ",i+1);
        scanf("%d",&student[i].rollno);
        printf("Enter the CGPA of %d student: ",i+1);
        scanf("%f",&student[i].cgpa);
        if(student[i].cgpa>maxcg){
            maxinfo = student[i];
            maxcg = student[i].cgpa;
        }
        if(student[i].cgpa<mincg){
            mininfo = student[i];
            mincg = student[i].cgpa;
        }

    }
    printf("\n");
    printf("Name of student with highest cgpa : %s\n",maxinfo.name);
    printf("Rollno of student with highest cgpa is:  %d\n",maxinfo.rollno);
    printf("Highest CGPA is:  %.2f\n\n",maxinfo.cgpa);
    printf("Name of student with lowest cgpa %s\n",mininfo.name);
    printf("Rollno of student with lowest cgpa is %d\n",mininfo.rollno);
    printf("Lowest CGPA is %.2f\n",mininfo.cgpa);
    return 0;

}