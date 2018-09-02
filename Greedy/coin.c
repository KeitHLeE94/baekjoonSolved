//11047번
/*
  별다른 어려움 없이 잘 풀었다.
*/

#include <stdio.h>

int N, K;

int main(void){
  int i;
  int count = 0;

  scanf("%d%d", &N, &K);

  int coins[N+1];

  coins[0] = 0;

  for(i=1; i<=N; i++){
    scanf("%d", &coins[i]);
  }

  for(i=N; i>=1; i--){
    if(K / coins[i] != 0){
      count += K / coins[i];
      K -= coins[i] * (K / coins[i]);
    }
  }

  printf("%d\n", count);

  return 0;
}
