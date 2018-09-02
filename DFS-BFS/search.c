//1260번
/*
  DFS와 BFS의 기초에 대해 자세히 알아볼 수 있는 문제.
  꼭 이해하고 외워둘 것.
*/

#include <stdio.h>

int N, M, V;
int map[1001][1001];
int queue[1001];
int dVisit[1001];
int bVisit[1001];
int rear = 0, front = 0;

void DFS(int v){
  int i;

  dVisit[v] = 1;

  printf("%d ", v);

  for(i=1; i<=1000; i++){
    if(map[v][i] == 1 && !dVisit[i]){
      DFS(i);
    }
  }
}

void BFS(int v){
  int i;
  int b;

  bVisit[v] = 1;
  queue[rear] = v;
  rear++;

  while(front < rear){
    b = queue[front];
    front++;
    printf("%d ", b);

    for(i=1; i<=1000; i++){
      if(map[b][i] == 1 && !bVisit[i]){
        bVisit[i] = 1;
        queue[rear] = i;
        rear++;
      }
    }
  }
}

int main(void){
  int i;
  int start, end;

  scanf("%d%d%d", &N, &M, &V);

  for(i=0; i<M; i++){
    scanf("%d%d", &start, &end);
    map[start][end] = map[end][start] = 1;
  }

  DFS(V);
  printf("\n");
  BFS(V);
  printf("\n");

  return 0;
}
