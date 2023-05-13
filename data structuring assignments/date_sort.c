#include <stdio.h>

typedef struct{
    int day;
    int month;
    int year;
}date;

void swap(date *a,date *b){
     date temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    printf("enter the number of dates: ");
    scanf("%d",&n);
    date dates[n];
    printf("Enter dates (dd mm yyyy): ");
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&dates[i].day,&dates[i].month,&dates[i].year);  //taking input as dd mm yyyy format
    } 
    //using the bubble sort algorithm in a modified way to sort the dates
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(dates[j].year>dates[j+1].year){
                swap(&dates[j],&dates[j+1]);  //sorting done according to the year
            }
            //if year comes out to be same then comparison is done based on the month
            else if(dates[j].year==dates[j+1].year){  
                if(dates[j].month>dates[j+1].month){
                    swap(&dates[j],&dates[j+1]);  
                }
                //if the month comes out ton be the same , then comparsion is done according to the day 
                else if(dates[j].month==dates[j+1].month){
                    if(dates[j].day>dates[j+1].day){
                        swap(&dates[j],&dates[j+1]);  //swapping is performed at every stage to complete the bubble sorting
                    }
                }
            }
        }
    }
    printf("The dates in sorted order are: \n");
    for(int i=0;i<n;i++){
        printf("%d-%d-%d\n",dates[i].day,dates[i].month,dates[i].year);
    }
    return 0;
}