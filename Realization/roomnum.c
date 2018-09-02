//1475번
/*
  단순하면서도 의외로 생각해야할게 많은 문제였다.
  핵심은 6이나 9를 둘 중 하나로 통일시키고 시작하는것.
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char N[7];
  int i, j;
  int set[10] = {0};

  scanf("%s", N);

  for(i=0; i<strlen(N); i++){
    if(N[i] == '9'){
      N[i] = '6';
    }
    set[N[i]-48]++;
  }

  set[6] = set[6] / 2 + set[6] % 2;

  int max = 0;

  for(i=0; i<9; i++){
    if(max < set[i]){
      max = set[i];
    }
  }

  printf("%d\n", max);

  return 0;
}
