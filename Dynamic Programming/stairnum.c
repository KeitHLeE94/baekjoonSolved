//10844번

#include <stdio.h>
#include <math.h>

int main(void){
  int N;
  int i, j;
  int True = 1;

  scanf("%d", &N);

  int search = pow(10, N-1);
  int dest = pow(10, N);

  int pool[dest * 10];
  int count = 0;

  for(i=search; i<dest; i++){
    pool[i] = i;
  }

  int compare[N * (dest - search) + 1];

  compare[0] = 0;

  for(i=search; i<dest; i++){
    int temp[dest * 10];
    for(j=search; j<dest; j++){
      temp[j] = pool[j];
    }
    for(j=1; j<=N; j+=2){
      compare[j] = temp[i] / pow(10, N-j);
      compare[j+1] = temp[i] - compare[j] * pow(10, N-j);
    }
    for(j=1; j<N; j++){
      if(compare[j] - compare[j+1] != 1 && compare[j] - compare[j+1] != -1){
        True = 0;
      }
    }
    if(True){
      count++;
    }
    for(i=1; i<=N*(dest-search)+1; i++){
      compare[i] = 0;
    }
  }

  printf("%d\n", count);

  return 0;
}
