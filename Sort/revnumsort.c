//2751번
/*
  오름차순 정렬
*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  int num1 = *(int*)a;
  int num2 = *(int*)b;

  if(num1 < num2){
    return -1;
  }
  else if(num1 == num2){
    return 0;
  }
  else{
    return 1;
  }
}

int main(void){
  int N;
  int i;

  scanf("%d", &N);

  int num[N];

  for(i=0; i<N; i++){
    scanf("%d", &num[i]);
  }

  qsort(num, sizeof(num) / sizeof(int), sizeof(int), compare);

  for(i=0; i<N; i++){
    printf("%d\n", num[i]);
  }

  return 0;
}
