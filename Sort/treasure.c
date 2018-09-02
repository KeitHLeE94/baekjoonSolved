//1026번
/*
  A를 오름차순으로, B를 내림차순으로 정렬한다음 곱한 결과를 더하면 되는 문제.
  처음으로 qsort함수를 써봤다.
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
  int i;
  int S = 0;

  scanf("%d", &N);

  int A[N];
  int B[N];

  for(i=0; i<N; i++){
    scanf("%d", &A[i]);
  }

  for(i=0; i<N; i++){
    scanf("%d", &B[i]);
  }

  qsort(A, N, sizeof(int), compare);
  qsort(B, N, sizeof(int), compare);

  for(i=0; i<N; i++){
    S += A[i] * B[N-i-1];
  }

  printf("%d\n", S);

  return 0;
}
