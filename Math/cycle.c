//1110번
/*
  별것도아닌문제를 세번이나 틀렸다가 맞혔다.
  처음에는 따로 함수를 만들어서 풀었는데 채점이 91%까지 진행되다가 틀렸다고 나오더라.
  조건 반복문으로 바꿔서 푸니까 맞았음.
*/

#include <stdio.h>

int main(void){
  int temp;
  int N;
  int count = 0;

  scanf("%d", &N);

  temp = N;

  while(temp != N || count == 0){
    temp = (((temp / 10) + (temp % 10)) % 10) + (10 * (temp % 10));
    count++;
  }

  printf("%d\n", count);

  return 0;
}
