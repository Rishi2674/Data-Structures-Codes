#include <stdio.h>

void swap(int *a , int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void print_arr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int  i = low-1;
    for(int j=low;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[j],&arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1);

}

void quicksort(int arr[],int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
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
    quicksort(arr,0,n-1);
    printf("The sorted array is:\n");
    print_arr(arr,n);
    return 0;
}