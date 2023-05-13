#include <stdio.h>
#include <stdlib.h>

void print_arr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insert_sort(int a[ ], int n) {
    int key;
    for (int i=1; i<n; i++) {
        key = a[i] ;
        for (int j=i-1; j>=0; j--){
            if (key < a[j]){
                 a[j+1] = a[j];
                 a[j] = key; 
                 }
            else break;
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
    insert_sort(arr,n);
    printf("The sorted array is:\n");
    print_arr(arr,n);
    return 0;
}
