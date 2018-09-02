//2108번

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int N, input, i, j, sum = 0, count = -1;
  int avg, middle, frq, range, max = 0;
  int num[8001] = {0};

  scanf("%d", &N);

  int sorted[N];

  for(i=0; i<N; i++){
    scanf("%d", &input);
    num[4000 + input]++;
    sorted[i] = input;
    sum += input;
  }

  avg = sum / N;

  for(i=0; i<=8000; i++){
    if(num[i] != 0){
      for(j=0; j<num[i]; j++){
        count++;
        if(count == N / 2){
          middle = i - 4000;
        }
      }
      if(num[i] > max){
        max = num[i];
        frq = i - 4000;
      }
      else if(num[i] == max){
        frq = i - 4000;
      }
    }
  }

  printf("%d\n%d\n%d\n", avg, middle, frq);

  return 0;
}
