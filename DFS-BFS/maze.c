//2178번
/*
  DFS로 풀다가 실패해서 BFS로 바꿔서 푼다.
  런타임오류 4번 내다가 enqueue(0, 0, 1)을 아예 BFS함수 밖으로 빼고
  map[_y][_x] = '0'을 enqueue 함수에 추가하여 해결했음.
*/

#include <stdio.h>

int N, M, front = 0, rear = 0;
char map[100][100];
int x[10000], y[10000], l[10000];

void enqueue(int _x, int _y, int _l){
  x[rear] = _x;
  y[rear] = _y;
  l[rear] = _l;
  rear++;
  map[_y][_x] = '0';
}

int BFS(int _x, int _y){
  while(front < rear){
    map[y[front]][x[front]] = '0';

    if(x[front] == M-1 && y[front] == N-1){
      return l[front];
    }

    else{
      if(y[front] > 0 && map[y[front] - 1][x[front]] == '1'){
        enqueue(x[front], y[front] - 1, l[front] + 1);
      } //위쪽으로 1칸 이동
      if(y[front] < N-1 && map[y[front] + 1][x[front]] == '1'){
        enqueue(x[front], y[front] + 1, l[front] + 1);
      } //아래쪽으로 1칸 이동
      if(x[front] > 0 && map[y[front]][x[front] - 1] == '1'){
        enqueue(x[front] - 1, y[front], l[front] + 1);
      } //왼쪽으로 1칸 이동
      if(x[front] < M-1 && map[y[front]][x[front] + 1] == '1'){
        enqueue(x[front] + 1, y[front], l[front] + 1);
      } //오른쪽으로 1칸 이동

      front++;
    }
  }
}

int main(void){
  int i, j;

  scanf("%d%d", &N, &M);

  for(i=0; i<N; i++){
    scanf("%s", map[i]);
  }

  enqueue(0, 0, 1);

  int result = BFS(0, 0);

  printf("%d\n", result);

  return 0;
}
