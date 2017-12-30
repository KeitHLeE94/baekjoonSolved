//2193번
/*
  규칙성 잘 찾아서 풀었다.
  한번 틀렸는데, 숫자 오버플로우 나는것 생각 안하고 int형태로 했다가 나중에 결과 확인하고 고쳐서 맞췄음.
*/

#include <stdio.h>

int main(void){
  int input, i;

  scanf("%d", &input);

  long result[91];

  result[1] = 1;
  result[2] = 1;

  for(i=3; i<=90; i++){
    result[i] = result[i-1] + result[i-2];
  }

  printf("%ld\n", result[input]);

  return 0;
}
