//2217번
/*
  쉽게 풀 수 있을거라 자신했는데 생각보다 쉬우면서도 고려해야할 사항이 많았다.
*/

#include <stdio.h>
#include <stdlib.h>

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
  int N;
  int i;

  scanf("%d", &N);

  int rope[N];

  for(i=0; i<N; i++){
    scanf("%d", &rope[i]);
  }

  qsort(rope, N, sizeof(int), compare);

  int num1 = N * rope[0];
  int num2 = rope[N-1];
  int num3 = 0;
  int result = num1;

  for(i=0; i<N; i++){
    if(num3 < rope[i] * (N-i)){
      num3 = rope[i] * (N-i);
    }
  }

  if(num2 > num1 && num2 > num3){
    result = num2;
  }
  else if(num3 > num1 && num3 > num2){
    result = num3;
  }

  printf("%d\n", result);

  return 0;
}
