//9095번
/*
  생각좀 깊게 하자......
  규칙성 찾으면 바로 풀릴 문제였는데
  2, 3일때 경우의 수 고려하는것부터 틀려서 규칙성을 못찾았다.
  구글링하여 틀린 부분 찾아 고치니 바로 규칙성을 알아내서 풀었다.
*/

#include <stdio.h>

int main(void){
  int count, i;

  scanf("%d", &count);

  int num[count+1];

  for(i=1; i<=count; i++){
    scanf("%d", &num[i]);
  }

  int result[10000];

  result[1] = 1;
  result[2] = 2;
  result[3] = 4;

  for(i=4; i<=10; i++){
    result[i] = result[i-1] + result[i-2] + result[i-3];
  }

  for(i=0; i<count; i++){
    printf("%d\n", result[num[i+1]]);
  }

  return 0;
}
