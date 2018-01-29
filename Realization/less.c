//10871번

#include <stdio.h>

int main(void){
  int N, X;
  int i;

  scanf("%d%d", &N, &X);

  int A[N];

  for(i=0; i<N; i++){
    scanf("%d", &A[i]);
  }

  for(i=0; i<N; i++){
    if(A[i] < X){
      printf("%d ", A[i]);
    }
  }
  printf("\n");

  return 0;
}
