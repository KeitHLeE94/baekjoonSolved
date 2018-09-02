//2941번
/*
  strstr함수 써서 하려고 했다가 반복할 방법이 안떠올라서 문자 하나하나 비교하는 방법을 택했다.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
  char input[100];
  int i;

  scanf("%s", input);

  int result = strlen(input);

  for(i=0; i<strlen(input); i++){
    if(input[i] == 'd' && input[i+1] == 'z' && input[i+2] == '='){
      result -= 2;
    }
  }

  for(i=0; i<strlen(input); i++){
    if(input[i] == 'c' && (input[i+1] == '=' || input[i+1] == '-')){
      result--;
    }
    else if(input[i] == 'd' && input[i+1] == '-'){
      result--;
    }
    else if((input[i] == 'l' || input[i] == 'n') && input[i+1] == 'j'){
      result--;
    }
    else if(input[i] == 's' && input[i+1] == '='){
      result--;
    }
    else if(input[i] != 'd' && input[i+1] == 'z' && input[i+2] == '='){
      result--;
    }
  }

  printf("%d\n", result);

  return 0;
}
