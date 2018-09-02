#include <stdio.h>

int N;
int i, j;

int main(){
    scanf("%d", &N);

    for(i=1; i<N+1; i++){
        for(j=N-i; j>0; j--){
            printf(" ");
        }
        for(j=0; j<2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}