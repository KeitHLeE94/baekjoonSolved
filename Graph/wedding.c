//5567번
/*
  플로이드 알고리즘을 응용하여 각 친구들에게 도달하는 cost가 3보다 작으면 count하는 식으로 풀었다.
*/

#include <stdio.h>

int map[501][501] = {0};
const int INF = 1000000000;

int min(int a, int b){
  if(a > b){
    return b;
  }
  else{
    return a;
  }
}

int main(void){
  int n, m;
  int i, j, k;
  int a, b;
  int count = 0;

  scanf("%d%d", &n, &m);

  for(i=1; i<=500; i++){
    for(j=1; j<=500; j++){
      if(i == j){
        map[i][j] = 0;
      }
      else{
        map[i][j] = INF;
      }
    }
  }

  for(i=1; i<=m; i++){
    scanf("%d%d", &a, &b);
    map[a][b] = map[b][a] = 1;
  }

  for(i=1; i<=n; i++){
    for(j=1; j<=n; j++){
      for(k=1; k<=n; k++){
        if(map[j][k] && map[k][i]){
          map[i][j] = min(map[j][k] + map[k][i], map[i][j]);
          map[j][i] = map[i][j];
        }
      }
    }
  }

  for(i=1; i<=n; i++){
    if(map[1][i] < 3 && map[1][i] != 0){
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}
