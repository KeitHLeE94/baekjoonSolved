//1011번

#include <stdio.h>

int main(void){
  int T;
  int x, y;
  int i, j, k;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d", &x, &y);

    long long dp[2147483648][2147483648] = {};

    dp[x][x+1] = 1;
    dp[y-1][y] = 1;

    for(j=x; j<=y; j++){
      for(k=2; k<=y; k++){
        dp[j][k] = dp[j-1][k-1] + dp[j-1][k-1]
      }
    }
  }
}
