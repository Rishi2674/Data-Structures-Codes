/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 1 Question 1*/
#include <stdio.h>

int *download_time(float a , float b){
    static int arr[3];
    int time = b/a;
    int hours =  time/(60*60); //finding the time in hours
    time = time%(60*60);
    int minutes = time/60; //finding time in minutes
    int seconds = time%60; //finding time in seconds
    arr[0] = hours;
    arr[1] = minutes;
    arr[2] = seconds;
    return arr;
}

int main(){
    float download_speed , file_size;
    printf("Enter the size of file in Mb :");
    scanf("%f",&file_size);
    printf("Enter the download speed in Mbps:");
    scanf("%f",&download_speed);
    int *p = download_time(download_speed , file_size); //function call
    printf("%d hours ",*p);
    p++;
    printf("%d minutes ",*p);
    p++;
    printf("%d seconds\n",*p );
    return 0;
}