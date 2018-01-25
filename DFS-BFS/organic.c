//1012번
/*
  bfs 예시를 나름대로 변형해봐서 풀어봤다.
  테스트케이스는 잘 나오는데, 틀렸다고 나오는데
  어느 부분에서 틀렸는지 잘 모르겠다...
*/

#include <stdio.h>

int map[50][50];
int visit[50][50];
int T, M, N, K;
int count = 0;

void DFS(int x, int y){
  if(x == M-1 && y == N-1){
    return;
  }

  if(y>0 && map[y-1][x] && !visit[y-1][x]){
    visit[y-1][x] = 1;
    DFS(x, y-1);
  } //위로 1칸 이동
  if(y<N-1 && map[y+1][x] && !visit[y+1][x]){
    visit[y+1][x] = 1;
    DFS(x, y+1);
  } //아래로 1칸 이동
  if(x>0 && map[y][x-1] && !visit[y][x-1]){
    visit[y][x-1] = 1;
    DFS(x-1, y);
  } //왼쪽으로 1칸 이동
  if(x<M-1 && map[y][x+1] && !visit[y][x+1]){
    visit[y][x+1] = 1;
    DFS(x+1, y);
  } //오른쪽으로 1칸 이동
}

void search(void){
  int i, j;

  for(i=0; i<M; i++){
    for(j=0; j<N; j++){
      if(map[i][j] == 1 && !visit[i][j]){
        visit[i][j] = 1;
        count++;
        DFS(i, j);
      }
    }
  }
}

void init(void){
  count = 0;
  int i, j;

  for(i=0; i<50; i++){
    for(j=0; j<50; j++){
      map[i][j] = 0;
      visit[i][j] = 0;
    }
  }
}

int main(void){
  int i, j, k;
  int X, Y;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d%d", &M, &N, &K);
    for(j=0; j<K; j++){
      scanf("%d%d", &X, &Y);
      map[Y][X] = 1;
    }
    search();
    printf("%d\n", count);
    init();
  }

  return 0;
}
