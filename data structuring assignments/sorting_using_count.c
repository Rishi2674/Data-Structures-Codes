#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    int count[100] ={0}; //initating a count array with all elements to 0
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;  //incrementing the count of each number entered in the array
    }

    int index = 0;
    for (int i = 0; i<100; i++){
        while (count[i] != 0){ 
            arr[index] = i;  //reinitialsing the array using the count of each number
            index++;
            count[i]--;
        }
    }
    printf("Sorted array : \n");
    for (int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

}