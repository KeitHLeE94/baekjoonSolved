#include <stdio.h>

int N;
int i, j;

int main(){
    scanf("%d", &N);

    for(i=1; i<N+1; i++){
        for(j=0; j<i; j++){
            printf("*");
        }
        for(j=N-i; j>0; j--){
            printf(" ");
        }
        for(j=N-i; j>0; j--){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=1; i<N; i++){
        for(j=0; j<N-i; j++){
            printf("*");
        }
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=0; j<N-i; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}