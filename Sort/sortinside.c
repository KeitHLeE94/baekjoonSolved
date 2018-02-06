//1427번
/*
  교훈: 퀵소트는 만병통치약이 아니다.
  퀵소트 남발하지 말것. 이런 문제같은 경우엔 퀵소트가 오히려 안먹히는 문제였다.
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char N[10];
  char temp;
  int i, j;

  scanf("%s", N);

  for(i=0; i<strlen(N); i++){
    for(j=0; j<strlen(N); j++){
      if(N[i] > N[j]){
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
      }
    }
  }

  printf("%s\n", N);

  return 0;
}
