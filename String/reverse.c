//2908번
/*
  연속으로 문자열을 입력받을때 개행문자가 입력되는 경우를 고려해야 했던 문제.
  문자열 끝에 강제로 널문자 넣는식으로 해결했다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char A[4];
  char B[4];
  char rA[4], rB[4];
  int i;
  int aI, bI;

  scanf("%s", A);
  A[strlen(A)] = '\0';
  scanf("%s", B);
  B[strlen(B)] = '\0';

  for(i=0; i<strlen(A); i++){
    rA[i] = A[strlen(A) - i - 1];
  }

  for(i=0; i<strlen(B); i++){
    rB[i] = B[strlen(B) - i - 1];
  }

  aI = atoi(rA);
  bI = atoi(rB);

  if(aI > bI){
    printf("%d\n", aI);
  }
  else{
    printf("%d\n", bI);
  }

  return 0;
}
