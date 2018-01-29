//1546번
/*
  주작작 주주작
*/

#include <stdio.h>

int main(void){
  int N;
  int i;
  int max = 0;
  float sum = 0;

  scanf("%d", &N);

  int score[N];

  for(i=0; i<N; i++){
    scanf("%d", &score[i]);
    if(score[i] > max){
      max = score[i];
    }
  }

  float newScore[N];

  for(i=0; i<N; i++){
    newScore[i] = (float)score[i] / (float)max * 100;
    sum += newScore[i];
  }

  printf("%.2f\n", sum / N);

  return 0;
}
