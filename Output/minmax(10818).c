#include <stdio.h>

int N;
int i;
int num;

int main(){
    scanf("%d", &N);

    int min = 1000000, max = -1000000;
    for(i=0; i<N; i++){
        scanf("%d", &num);
        if(num < min){
            min = num;
        }
        if(num > max){
            max = num;
        }
    }

    printf("%d %d\n", min, max);

    return 0;
}