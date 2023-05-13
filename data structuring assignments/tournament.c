#include <stdio.h>

int main(){
    int n;
    printf("Enter the elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index = 0; //initiating a value index to 0 to copy the elements
    int tourn[(2*n)-1];
    for(int i=n;i<2*n;i++){
        tourn[i] = arr[index];  //upward traversal entering the initial elements of array 
        index++;
    }
    for (int i = 2*n-2; i>1; i-=2){
        if (tourn[i] >= tourn[i+1]) tourn[i/2] = tourn[i];  //entering winners of each pair into the array declared
        else tourn[i/2] = tourn[i+1];
    }
    int max = tourn[1];
    printf("The maximum number is : %d\n", max); //the first element of the array is the maximum number

    //--------------------------------------------------------------------------------------------------------------------------

    //METHOD 1 

    int next_max = -1;  //a variable next_max intitialised as -1
    int trav=1;
    //downward travsersal to check whether the number paired with max is next_max by checking conditions at each traversal
    while(trav<=2*n-1){   
        if(tourn[2*trav]==max){
            if(next_max<tourn[2*trav+1]) next_max = tourn[2*trav+1];  
            trav = 2*trav ;
        }
        else{
            if(next_max < tourn[2*trav]) next_max = tourn[2*trav];
            trav = 2*trav +1;
        }
    }
    printf("The second largest number is (by method 1): %d\n",next_max);

    //----------------------------------------------------------------------------------------------------------------------------

    //METHOD 2 

    tourn[1] = -1;   //assigning the value of max to -1
    
    //downward traversal to reassign the max to calculate the next max
    for (int i = 1; i<=2*n-1;){
        if (tourn[2*i] == max) {
            tourn[2*i] = -1;  //assigning max to -1
            i = 2*i;
        }
        else {
            tourn[2*i + 1] = -1;
            i = 2*i + 1;
        }
    }
    //upward traversal again using updated max to find out next_max
    for (int i = 2*n-2; i>1; i = i-2){
        if (tourn[i] >= tourn[i+1]) tourn[i/2] = tourn[i];
        else tourn[i/2] = tourn[i+1];
    }
    int next_max1 = tourn[1];
    printf("The second largest number is (by method 2): %d\n", next_max);
    return 0;
}