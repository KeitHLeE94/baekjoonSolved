//11404번
/*
  11403번(route.c)와 동일한 알고리즘을 적용하여 푸는 문제다.
  플로이드 알고리즘에 대해 제대로 알 수 있는 문제.
  예전 네트워크 시간에 했던 poisoning 적용과 유사하게 처음에 그래프를 0이나 무한대로 놓은 다음 업데이트 해가는 방식이다.
*/

#include <stdio.h>

int n, m;
int map[101][101];
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
  int i, j, k;
  int a, b, c;

  scanf("%d", &n);
  scanf("%d", &m);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(i == j){
        map[i][j] = 0;
      }
      else{
        map[i][j] = INF;
      }
    }
  }

  for(i=0; i<m; i++){
    scanf("%d%d%d", &a, &b, &c);
    map[a-1][b-1] = min(map[a-1][b-1], c);
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      for(k=0; k<n; k++){
        map[j][k] = min(map[j][k], map[j][i] + map[i][k]);
      }
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}
