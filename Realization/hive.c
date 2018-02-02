//2292번

#include <stdio.h>

int main(void){
  int N;
  int i;
  int test = 1;

  scanf("%d", &N);

  for(i=0; i<1000000000; i++){
    test += i * 6;
    if(N <= test){
      break;
    }
  }

  printf("%d\n", i+1);

  return 0;
}
