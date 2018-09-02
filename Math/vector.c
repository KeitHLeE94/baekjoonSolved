//1007번

#include <stdio.h>
#include <math.h>

int main(void){
  int T;
  int N;
  int i, j;
  int x, y;
  double result;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d", &N);

    int x[N+1];
    int y[N+1];

    for(j=1; j<=N; j++){
      scanf("%d%d", &x[j], &y[j]);
    }

    if(N != 2){
      result = 0;
    }
    else if(N == 2){
      result = sqrt(pow((x[2]-x[1]), 2) + pow((y[2]-y[1]), 2));
    }

    printf("%.6lf\n", result);
  }

  return 0;
}
