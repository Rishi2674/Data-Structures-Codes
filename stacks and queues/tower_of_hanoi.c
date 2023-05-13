#include <stdio.h>

void tower_of_hanoi(int n,char left , char temp , char right){
    if(n==1){
        printf("Move %d disc from %c to %c\n",n,left,right);
    }
    else{
        tower_of_hanoi(n-1,left,right,temp);
        printf("Move %d disc from %c to %c\n",n,left, right);
        tower_of_hanoi(n-1,temp,left,right);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    tower_of_hanoi(n,'L','C','R');
    return 0;
}