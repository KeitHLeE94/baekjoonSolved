//11720번
/*
  atoi 함수 쓰려다 아스키코드값으로 처리
*/

#include <stdio.h>

int main(void){
  int N;
  int i;
  int sum = 0;

  scanf("%d", &N);

  char num[N];

  scanf("%s", num);

  for(i=0; i<N; i++){
    sum += ((int)num[i] - 48);
  }

  printf("%d\n", sum);

  return 0;
}
