//10039번

#include <stdio.h>

int main(void){
  int score[5];
  int i;
  int sum = 0;

  for(i=0; i<5; i++){
    scanf("%d", &score[i]);
    if(score[i] < 40){
      score[i] = 40;
    }
    sum += score[i];
  }

  printf("%d\n", sum / 5);

  return 0;
}