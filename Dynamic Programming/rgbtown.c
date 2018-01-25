//1149번 문제.
/*
  처음에 맨 첫줄의 최소값을 구하고 그 다음부터는 인덱스가 안겹치는 식으로 더해서 결과를 구했으나,
  첫줄에서 최소값을 사용하지 않았을 때 비용의 최소값이 나오는 경우를 커버할 수 없어서 틀림.
  이후 문제점을 찾아내고 인터넷에서 다른 답을 찾아 다시 풀었음...
  항상 배열 여러개를 써서 푸는 습관이 필요할 것 같다.
*/

#include <stdio.h>

int position;

int min(int a, int b){
  return a > b ? b : a;
}

int main(void){
  int input, i, j, price;
  scanf("%d", &input);

  int cost[input+1][3];
  int result[input+1][3];

  for(i=1; i<input+1; i++){
    for(j=0; j<3; j++){
      scanf("%d", &price);
      cost[i][j] = price;
    }
  }

  cost[0][0] = cost[0][1] = cost[0][2] = result[0][0] = result[0][1] = result[0][2] = 0;

  for(i=1; i<input+1; i++){
    result[i][0] = min(result[i-1][1], result[i-1][2]) + cost[i][0];
    result[i][1] = min(result[i-1][0], result[i-1][2]) + cost[i][1];
    result[i][2] = min(result[i-1][0], result[i-1][1]) + cost[i][2];
  }

  printf("%d\n", min(min(result[input][0], result[input][1]), result[input][2]));

  return 0;
}
