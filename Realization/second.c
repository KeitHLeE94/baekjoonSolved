//10817번

#include <stdio.h>

int main(void){
  int A, B, C;

  scanf("%d%d%d", &A, &B, &C);

  if((A <= B && B <= C) || (C <= B && B <= A)){
    printf("%d\n", B);
  }
  else if((A <= B && C <= A) || (B <= A && A <= C)){
    printf("%d\n", A);
  }
  else if((C <= B && A <= C) || (B <= C && C <= A)){
    printf("%d\n", C);
  }

  return 0;
}
