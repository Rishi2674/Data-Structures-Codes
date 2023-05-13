#include <stdio.h>

void swap(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_arr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter the no of elements of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array entered is:\n");
    print_arr(arr,n);
    bubble_sort(arr,n);
    printf("The sorted array is:\n");
    print_arr(arr,n);
    return 0;
}