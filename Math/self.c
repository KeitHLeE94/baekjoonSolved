//4673번
/*
  재귀함수로 풀었다.
  콘솔로 돌려봤을때 시간이 좀 걸리는것같아서 시간초과나올것같아 걱정했는데
  맞았다고 나왔다.
*/

#include <stdio.h>

int self[10001] = {0};

void make(int num){
  int A = 0, B = 0, C = 0, D = 0; //A: 10의 자리, B: 1의 자리, C: 100의 자리, D: 1000의 자리
  int i;
  int test = num;

  if(num <= 10000){
    D = num / 1000;
    C = (num - 1000 * D) / 100;
    B = (num - 1000 * D - 100 * C) / 10;
    A = num - 1000 * D - 100 * C - 10 * B;
    test += A + B + C + D;

    for(i=1; i<=10000; i++){
      self[test] = -1;
    }

    make(test);
  }
  else{
    return;
  }
}

int main(void){
  int i;

  for(i=1; i<=10000; i++){
    self[i] = i;
  }

  for(i=1; i<=10000; i++){
    if(self[i] > 0){
      make(self[i]);
    }
  }

  for(i=1; i<=10000; i++){
    if(self[i] > 0){
      printf("%d\n", self[i]);
    }
  }

  return 0;
}
