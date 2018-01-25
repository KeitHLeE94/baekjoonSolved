//4963번
/*
  DFS써서 푸는줄 모르고 그냥 풀다가 DFS 사용.
  여태까지 써왔던 DFS가 여기서는 틀렸다고 나온다.
  이제 여기서 쓴 새로운 DFS를 기본으로 사용해야겠다.
*/

#include <stdio.h>

int map[50][50];
int visit[50][50] = {0};
int w, h;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void DFS(int x, int y){
  int i, nx, ny;
  visit[x][y] = 1;

  for(i=0; i<8; i++){
    nx = x + dx[i];
    ny = y + dy[i];

    if(nx >= h || nx < 0 || ny >= w || ny < 0){
      continue;
    }

    if(visit[nx][ny] == 0 && map[nx][ny] == 1){
      DFS(nx, ny);
    }
  }
}

int main(void){
  int i, j;
  int count;

  while(1){
    scanf("%d%d", &w, &h);

    if(w == 0 && h == 0){
      return 0;
    }

    for(i=0; i<50; i++){
      for(j=0; j<50; j++){
        visit[i][j] = 0;
        map[i][j] = 0;
      }
    }

    count = 0;

    for(i=0; i<h; i++){
      for(j=0; j<w; j++){
        scanf("%d", &map[i][j]);
      }
    }

    for(i=0; i<h; i++){
      for(j=0; j<w; j++){
        if(visit[i][j] == 0 && map[i][j] == 1){
          DFS(i, j);
          count++;
        }
      }
    }

    printf("%d\n", count);
  }

  return 0;
}
