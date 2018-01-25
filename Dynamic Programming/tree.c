//1932번
/*
  뭘 더해야되는지는 파악했으나 그것을 코드로 표현하는 문제를 넘지 못해 풀지 못했음.
  점화식 잘세우는 사람들 보면 그저 신기하다.
*/

#include <stdio.h>

int max(int a, int b){
  return a > b ? a : b;
}

int main(void){
  int height, i, j;
  long long maximum = 0;

  scanf("%d", &height);

  int tree[501][501];

  for(i=1; i<=height; i++){
    for(j=1; j<=i; j++){
      scanf("%d", &tree[i][j]);
      if(j == 1){
        tree[i][j] = tree[i-1][j] + tree[i][j];
      }
      else if(j == i){
        tree[i][j] = tree[i-1][j-1] + tree[i][j];
      }
      else{
        tree[i][j] = max(tree[i-1][j-1], tree[i-1][j]) + tree[i][j];
      }
      if(maximum < tree[i][j]){
        maximum = tree[i][j];
      }
    }
  }

  printf("%lld\n", maximum);

  return 0;
}
