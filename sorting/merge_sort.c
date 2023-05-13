#include <stdio.h>

void merge(int arr[], int i,int j){
   int k,ans[100],mid,l,start;
    start = i;
    mid = (i+j)/2;
    k = mid+1;
    l = i;
    while(i<=mid && k<=j)
      if(arr[i] >= arr[k])
          ans[l++] = arr[k++];
       else
           ans[l++] = arr[i++];
    
    if(k<=j){
        while(k<=j) ans[l++] = arr[k++];
    }
    if(i<=mid){
        while(i<=mid) ans[l++] = arr[i++];
    }
    for(l=start;l<=j;l++) arr[l] = ans[l];

}

void merge_sort(int arr[],int i,int j){
    int k,mid;
    if( i>=j) return ; // one element in the list
    mid = (i+j)/2;  // splitting point
    merge_sort(arr,i,mid);
    merge_sort(arr,mid+1,j);
    merge(arr,i,j);
}

void print_arr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the no of elements of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array entered is:\n");
    print_arr(arr, n);
    merge_sort(arr, 0, n - 1);
    printf("The sorted array is:\n");
    print_arr(arr, n);
    return 0;
}