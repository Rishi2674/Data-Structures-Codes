#include <stdio.h>

int main(){
    printf("The pair of triplets are: \n");
    for (int i = 1;i <= 20;i++){
        for (int j = i;j <= 20;j++){
            for (int k = j;k <= 20;k++){
                int sum = i*i + j*j + k*k;
                for (int l = i;l <= 20;l++){
                    for (int m = l;m <= 20;m++){
                        for (int n = m;n <= 20;n++){
                            if ((sum == l*l + m*m + n*n) && (i != l || j != m || k !=n)){
                                printf("(%d %d %d) ,(%d %d %d)\n",i,j,k,l,m,n);
                            }
                        }
                    }
                }
            }
        }
    }
}