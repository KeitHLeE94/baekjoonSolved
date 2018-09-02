#include <stdio.h>

int N;
int i, j;

int main(){
    scanf("%d", &N);

    for(i=1; i<N+1; i++){
        for(j=i; j<N; j++){
            printf(" ");
        }
        for(j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=1; i<N; i++){
        for(j=0; j<i; j++){
            printf(" ");
        }
        for(j=N; j>i; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}