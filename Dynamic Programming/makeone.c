//1463번 문제.

#include <stdio.h>

int dp[100001];

int min(int a, int b){
  return a > b ? b : a;
}

int main(void){
  int input, i;

  scanf("%d", &input);

  dp[0] = 0;
  dp[1] = 0;

  for(i=2; i<=input; i++){
    dp[i] = dp[i-1] + 1;
    if(i%2 == 0){
      dp[i] = min(dp[i], dp[i/2] + 1);
    }
    if(i%3 == 0){
      dp[i] = min(dp[i], dp[i/3] + 1);
    }
  }

  printf("%d\n", dp[input]);

  return 0;
}
