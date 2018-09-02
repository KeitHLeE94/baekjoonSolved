//11718번
/*
  scanf 함수로는 공백문자를 못받는다는 점을 참고하여
  다른 방식으로 문자열을 입력받는 문제.
*/

#include <stdio.h>

int main(void){
  char input[100];

  while(gets(input)){
    if(input[0] == '\0'){
      break;
    }
    puts(input);
  }

  return 0;
}
