//1011번
/*
  규칙이 참 즛같아서 찾기 힘들었던 문제.
*/

#include <stdio.h>

int count(int dist){
  int result = 0;
  long long pown, min, max, i;

  for(i=1; ;i++){
    pown = i*i;
    min = pown - i + 1;
    max = pown + i;

    if(min <= dist && dist <= max){
      if(min <= dist && dist <= pown){
        result = (i<<1) - 1;
      }
      else{
        result = i<<1;
      }
      break;
    }
  }
  return result;
}

int main(void){
  int T;
  int i;
  int dist;
  int x, y;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d", &x, &y);
    dist = y - x;
    printf("%d\n", count(dist));
  }

  return 0;
}
