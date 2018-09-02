//11721번
/*
  별거 아닌데 두번 틀리고서야 맞았다.
  처음에 이중 for문 사용하였다가 굳이 안그래도 될것같아서 고침.
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char input[100];
  int i;

  scanf("%s", input);

  for(i=0; i<strlen(input); i++){
    printf("%c", input[i]);
    if(i % 10 == 9 && i != 0){
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}
