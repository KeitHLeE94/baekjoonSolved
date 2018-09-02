//2448번

#include <stdio.h>

char star[3][5] = {"  *  ", " * * ", "*****"};

int main(void){
  int N;
  int i;

  scanf("%d", &N);

  printf("%s\n", star[0]);
  printf("%s\n", star[1]);
  printf("%s\n", star[2]);

  return 0;
}
