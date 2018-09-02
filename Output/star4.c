//2441번

#include <stdio.h>

int main(void){
  int N;
  int i, j;

  scanf("%d", &N);

  for(i=N; i>0; i--){
    for(j=N-i; j>0; j--){
      printf(" ");
    }
    for(j=i; j>0; j--){
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
