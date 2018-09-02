#include <stdio.h>

int N;
int i, j;

int main(){
    scanf("%d", &N);
    if(N == 1){
        printf("*\n");
    }
    else{
        for(i=0; i<N-1; i++){
            printf(" ");
        }
        printf("*\n");
        for(i=0; i<N-2; i++){
            printf(" ");
            printf("*");
            if(N % 2 == 0){
                for(i=0; i<N/2+1; i++){
                    printf(" ");
                }
            }
            else{
                for(i=0; i<N/2; i++){
                    printf(" ");
                }
            }
            printf("*\n");
        }
        for(i=0; i<2*N-1; i++){
            printf("*");
        }
        printf("\n");
    }
}