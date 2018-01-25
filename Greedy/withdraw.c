//11399번
/*
  별다른 어려움 없이 풀었음.
  그리디 알고리즘의 맛보기라고 보면 될 것 같다.
*/

#include <stdio.h>
#include <stdlib.h>

int N;

int compare(const void* first, const void* second){
  int a = *(int*)first;
  int b = *(int*)second;

  if(a > b){
    return 1;
  }
  else if(a < b){
    return -1;
  }
  else{
    return 0;
  }
}

int main(void){
  int i, j;
  int sum = 0;

  scanf("%d", &N);

  int P[N];

  for(i=0; i<N; i++){
    scanf("%d", &P[i]);
  }

  qsort(P, sizeof(P) / sizeof(int), sizeof(int), compare);

  for(i=0; i<N; i++){
    for(j=0; j<=i; j++){
      sum += P[j];
    }
  }

  printf("%d\n", sum);

  return 0;
}
