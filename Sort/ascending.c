//1015번
/*
  퀵소트 써서 풀어봤는데 예제까지는 잘 되지만
  실패라고 뜬다.
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  int num1 = *(int*)a;
  int num2 = *(int*)b;

  if(num1 < num2){
    return -1;
  }
  if(num1 > num2){
    return 1;
  }

  return 0;
}

int main(void){
  int N;
  int i, j;

  scanf("%d", &N);

  int A[N];
  int B[N];
  int P[N];

  for(i=0; i<N; i++){
    scanf("%d", &A[i]);
    B[i] = A[i];
  }

  qsort(A, N, sizeof(int), compare);

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(B[i] == A[j]){
        P[i] = j;
      }
    }
  }

  for(i=0; i<N; i++){
    printf("%d ", P[i]);
  }
  printf("\n");

  return 0;
}
