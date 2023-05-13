/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 1 Question 1*/
#include <stdio.h>
#include <limits.h>

int max_number(int *arr,int i,int n){
    static int a = INT_MIN;
    if(i==n) return a; //using recursions
    if(arr[i]>a) a = arr[i];
    return max_number(arr,i+1,n); 
}

 
 int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];  
    for(int i=0;i<n;i++){
        if(arr[i]>=max) max = arr[i]; //using iterations
    }
    printf("The maximum of array sequence using iterative technique is : %d\n",max);
    int maxrec = max_number(arr,0,n);
    printf("The maximum of array sequence using recursive technique is : %d\n",maxrec);
    return 0;
 }