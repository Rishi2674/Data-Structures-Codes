#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    int max, next_max;
    max = next_max = INT_MIN;
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            next_max = max; max = arr[i]; //assigning next_max to max and max to num
        }
        else if(arr[i]>next_max){
            next_max = arr[i];  //comparing the number with next_max
        }
    }
    printf("The largest number is : %d\n",max);
    printf("The second largest number is : %d\n", next_max);
    return 0;
}

/*The running time of this program is 0(n) as we are making running the loop n times and having conditional checks a total 
of 2 times in one loop .*/