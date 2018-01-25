//2839번
/*
  조건문을 계속 달아서 어떻게 해보려다가 안되길래 다른 방법을 생각해보았다.
  그러던 중 n = 5a + 3b의 형태로 나타날 수 있는지의 여부가 이 문제의 답이며
  a + b의 최소값을 찾는게 핵심이라는 생각이 문득 떠올라 문제를 풀 수 있었다.
*/

#include <stdio.h>

int main(void){
  int N;
  int i, j;
  int result = -1;
  int judge;
  int min = 10000;

  scanf("%d", &N);

  for(i=0; i<1667; i++){
    for(j=0; j<=1000; j++){
      judge = 3 * i + 5 * j;
      if(judge == N){
        if(min > i + j){
          min = i + j;
        }
      }
    }
  }

  if(min == 10000){
    printf("-1\n");
  }
  else{
    printf("%d\n", min);
  }

  return 0;
}
