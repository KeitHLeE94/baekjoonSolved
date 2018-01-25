//11403번
/*
  다른거 다 필요없고, 한 점에서 다른 점으로 가는 데 또다른 한 점을 거쳐서 갈수 있는지 없는지. 그거 생각해내는게 제일 중요하다.
*/

#include <stdio.h>

int N;
int map[100][100];

int main(void){
  int i, j, k;

  scanf("%d", &N);

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      scanf("%d", &map[i][j]);
    }
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      for(k=0; k<N; k++){
        if(map[k][i] && map[i][j]){
          map[k][j] = 1;
        }
      }
    }
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      printf("%d ", map[i][j]);
    }
    printf("\n");
  }

  return 0;
}
