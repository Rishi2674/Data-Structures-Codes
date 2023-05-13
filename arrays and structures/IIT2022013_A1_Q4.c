/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 1 Question 1*/
#include <stdio.h> 
int n ;
void swap(int *p ,int *q){
    int temp;
    for(int i=0;i<n;i++){
        temp = *p; *p = *q ; *q = temp; //swapping each element
        p++;q++;
    }
}

int main(){
    int n;
    printf("The size of the array is: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter the elements of array1: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array2: ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    swap(a,b);
    printf("Arrays after swapping:\n"); //printing the swapped arrays
    printf("a :");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("b :");
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("\n");


}