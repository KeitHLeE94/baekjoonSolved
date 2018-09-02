//2439번

#include <stdio.h>

int main(void){
  int N;
  int i, j;

  scanf("%d", &N);

  for(i=1; i<=N; i++){
    for(j=N-i; j>0; j--){
      printf(" ");
    }
    for(j=1; j<=i; j++){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
