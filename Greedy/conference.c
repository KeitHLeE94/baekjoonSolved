//1931번
/*
  중요했던점
  1. 회의 시간을 나타낼 수 있는 구조체 선언
  2. 생각보다 쉬운 문제였다
  3. 회의시간을 정렬하여 max값이 바뀔때마다 count를 늘려나가도록 구현
  나름 내 생각만으로 풀어보다가 결국 답안나와서 구글링.
  이것도 테스트케이스는 통과하는데, 틀렸다고 그러더라.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct time{
  int start, end;
}time;

int compare(const void* first, const void* second){
  time a = *(time*)first;
  time b = *(time*)second;

  return a.end < b.end ? -1 : a.end > b.end ? 1 : a.start < b.start? -1 : a.start > b.start ? 1 : 0;
}

int main(void){
  int N;
  int i;
  int count = 1;
  time t[100001];

  scanf("%d", &N);

  for(i=1; i<=N; i++){
    scanf("%d%d", &t[i].start, &t[i].end);
  }

  qsort(t, N, sizeof(int), compare);

  int max = t[0].end;

  for(i=1; i<=N; i++){
    if(t[i].start >= max){
      max = t[i].end;
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}
