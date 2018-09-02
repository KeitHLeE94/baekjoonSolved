//1004번
/*
  이번에도 문제는 복잡했지만 결국 점과 원 사이의 거리를 기준으로 답을 구하는 문제였다.
  한가지 아쉬운 점은 처음에 점과 원 사이의 거리 공식을 까먹어 매우 복잡하게 조건문을 구성해서 풀었는데
  훨씬 간단하고 정확한 방법이 있었음을 나중에서야 알게되었다는 점...
*/

#include <stdio.h>
#include <math.h>

int main(void){
  int T;
  int i, j;
  int x1, y1, x2, y2;
  int n;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    int cx[51] = {0};
    int cy[51] = {0};
    int r[51] = {0};
    int count = 0;
    int d1, d2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    scanf("%d", &n);

    for(j=1; j<=n; j++){
      scanf("%d%d%d", &cx[j], &cy[j], &r[j]);
      d1 = pow((x1 - cx[j]), 2) + pow((y1 - cy[j]), 2);
      d2 = pow((x2 - cx[j]), 2) + pow((y2 - cy[j]), 2);
      if(d1 < pow(r[j], 2) && d2 > pow(r[j], 2)){
        count++;
      }
      else if(d1 > pow(r[j], 2) && d2 < pow(r[j], 2)){
        count++;
      }
    }

    printf("%d\n", count);
  }

  return 0;
}
