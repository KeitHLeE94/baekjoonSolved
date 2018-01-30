//1065번
/*
  문제가 이해가 안돼서 구글링해본 다음에 풀었다.
*/

#include <stdio.h>

int main(void){
  int N;
  int i;
  int A, B, C; //A: 1의 자리, B: 10의 자리, C: 100의 자리
  int count = 0;

  scanf("%d", &N);

  int num[1001] = {0};

  for(i=1; i<=N; i++){
    num[i] = i;
  }

  if(N < 100){
    printf("%d\n", N);
  }
  else{
    count = 99;

    for(i=100; i<=N; i++){
      C = num[i] / 100;
      B = (num[i] - 100 * C) / 10;
      A = num[i] - 100 * C - 10 * B;

      if(A - B == B - C){
        count++;
      }
    }

    printf("%d\n", count);
  }

  return 0;
}
