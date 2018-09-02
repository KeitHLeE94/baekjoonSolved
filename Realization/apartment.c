//2775번
/*
  for문 3개라 시간초과날줄알았는데 통과했다.
*/

#include <stdio.h>

int map[15][15];

int main(void){
  int T;
  int a, b;
  int i, j, k;

  for(i=0; i<15; i++){
    for(j=0; j<15; j++){
      map[i][j] = 0;
    }
  }

  for(i=1; i<=14; i++){
    map[0][i] = i;
  }

  for(i=1; i<=14; i++){
    for(j=1; j<=14; j++){
      for(k=1; k<=j; k++){
        map[i][j] += map[i-1][k];
      }
    }
  }

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d", &a, &b);
    printf("%d\n", map[a][b]);
  }

  return 0;
}
