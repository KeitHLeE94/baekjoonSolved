//2579번
/*
  저번 software up 대회에서도 못풀었던 문제.
  이번에도 완전히 잘못 짚어 못풀었다.
  이 문제의 핵심은 3개의 계단을 연속하여 밟으면 안된다는 것인데,
  이는 즉 답을 찾고자 하는 계단에 대해 전 계단을 밟았느냐, 밟지 않았느냐의 각각의 경우에 대해 값을 구하고 비교하는 것이다.
  맨 처음 3개 계단에 대해서도 똑같이 적용.
  창의성이 부족해서 못푼건가...
*/

#include <stdio.h>

int max(int a, int b){
  return a > b ? a : b;
}

int main(void){
  int stairnum, i;
  int point;

  scanf("%d", &stairnum);

  int stair[stairnum+1];

  stair[0] = 0;

  for(i=1; i<=stairnum; i++){
    scanf("%d", &stair[i]);
  }

  int result[stairnum+1];

  result[0] = 0;

  for(i=1; i<=3 && i<=stairnum; i++){
    if(i != 3){
      result[i] = result[i-1] + stair[i];
    }
    else{
      result[i] = max(stair[i] + result[i-2], stair[i] + stair[i-1]);
    }
  }

  for(i=4; i<=stairnum; i++){
    result[i] = max(result[i-3] + stair[i-1] + stair[i], result[i-2] + stair[i]);
  }

  printf("%d\n", result[stairnum]);

  return 0;
}
