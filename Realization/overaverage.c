//4344번

#include <stdio.h>

int main(void){
  int C;
  int i, j;
  int N;

  scanf("%d", &C);

  for(i=0; i<C; i++){
    scanf("%d", &N);
    int score[N];
    int sum = 0;
    int count = 0;

    for(j=0; j<N; j++){
      scanf("%d", &score[j]);
      sum += score[j];
    }

    float average = (float)sum / (float)N;

    for(j=0; j<N; j++){
      if(score[j] > average){
        count++;
      }
    }

    printf("%.3f%%\n", (float)count / (float)N * 100);
  }

  return 0;
}
