/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 1 Question 1*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    char * ptr = (char *)malloc(1000*sizeof(char));
    printf("Enter the string: ");
    scanf("%s",ptr);
    int length=0;
    while(*ptr!='\0'){ //using character pointer to find the length of the string
        length++;
        ptr++;
    }
    printf("The length of the string is : %d\n",length);
    return 0;
}