//1002번
/*
  문제는 복잡했지만 결국은 원 두개의 교점의 갯수 구하는 문제였다.
  이런식으로 문제의 본질 파악하는게 가장 중요한 것 같다.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
  int T;
  int x1, y1, r1, x2, y2, r2;
  int i;

  int x3, y3;
  int result;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);

    int d = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    int min = abs(r1 - r2);
    int sum = r1 + r2;

    if(x1 == x2 && y1 == y2 && r1 == r2){
      result = -1;
    }
    else if(d == 0){
      result = 0;
    }
    else{
      if(min < d && d < sum){
        result = 2;
      }
      else if(d == sum || d == min){
        result = 1;
      }
      else if(sum < d || d < sum){
        result = 0;
      }
    }
    printf("%d\n", result);
  }

  return 0;
}
