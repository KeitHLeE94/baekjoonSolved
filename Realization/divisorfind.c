//1193번
/*
  규칙 찾는데도 시간이 좀 걸렸고, 찾고 나서 처리하는데도 시간이 꽤 걸린 문제.
*/

#include <stdio.h>

int main(void){
  int X;
  int i;
  int test = 0;
  int a, b; //a: 분자, b: 분모

  scanf("%d", &X);

  for(i=1; i<10000000; i++){
    test += i;
    if(X <= test){
      break;
    }
  }

  int gap = test - X;

  if(i % 2 == 0){
    a = i - gap;
    b = 1 + gap;
  }
  else if(i % 2 == 1){
    a = 1 + gap;
    b = i - gap;
  }

  printf("%d/%d\n", a, b);

  return 0;
}
