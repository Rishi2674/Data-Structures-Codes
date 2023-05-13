#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("input.txt", "w+");
    for(int i=0;i<100000;i++){
        fprintf(fptr,"%d ",rand());
    }
    fclose(fptr);
    return 0;
    
}
