//1008번
/*
  float이냐 double이냐로
  의외의 함정에 빠질 수 있던 문제.
*/

#include <stdio.h>

int main(void){
  double a, b;
  double result;
  scanf("%lf%lf", &a, &b);

  printf("%.9lf\n", a / b);

  return 0;
}
