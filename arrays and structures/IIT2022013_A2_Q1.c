/*Upadhyay Rishi Piyushkumar IIT2022013
Asiignment 2 Question 1*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point{
    float x;
    float y;
};
int main(){
    struct point a,b;
    printf("Enter x and y coordinate of the first point:");
    scanf("%f %f",&a.x,&a.y);
    printf("Enter x and y coordinate of the first point:");
    scanf("%f %f",&b.x,&b.y);
    float xdiv = b.x - a.x;
    float ydiv = b.y - a.y;
    float dist = sqrt(pow(xdiv,2)+pow(ydiv,2));
    printf("The distance between the two points is %.2f\n",dist);
    float xmid = (a.x+b.x)/2;
    float ymid = (a.y+b.y)/2;
    printf("The mid point of the two points given is (%.2f , %.2f).\n",xmid,ymid);

    return 0;


}