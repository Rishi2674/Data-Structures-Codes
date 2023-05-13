#include <stdio.h>
#include <stdlib.h>

void print_arr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int min(int a[],int k, int n){
    int pos = k;
    for(int i=k+1;i<n;i++){
        if(a[i]<a[pos]) pos=i;
    }
    return pos;
}

void sel_sort(int a[],int n){
    int m;
    for(int i=0;i<n-1;i++){
        int temp;
        m = min(a,i,n);
        temp = a[i];
        a[i] = a[m];
        a[m] = temp;

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
    sel_sort(arr,n);
    printf("The sorted array is:\n");
    print_arr(arr,n);
    return 0;
}