//1157번
/*
  알파벳 대소문자를 전부 저장한 배열을 각각 선언하여 문자열의 문자들과 일일이 비교해 답을 구하는 방식으로 풀었으나
  시간초과 발생.
  구글링한 결과를 조금 손봐서 아스키코드 값을 이용해 답을 구하는 방식으로 바꿔 풀었다.
*/

#include <stdio.h>
#include <string.h>

int main(void){
  char input[1000000];
  int count;
  int i, j, k;
  int max = 0;
  int alphabet[26];
  int maxCount = 0;

  scanf("%s", input);

  for(i=65; i<91; i++){
    count = 0;
    for(j=0; j<strlen(input); j++){
      if(input[j] == i || input[j] == i + 32){
        count++;
      }
    }
    alphabet[i-65] = count;
  }

  for(i=0; i<26; i++){
    if(alphabet[i] > max){
      max = alphabet[i];
    }
  }

  for(i=0; i<26; i++){
    if(alphabet[i] == max){
      maxCount++;
      k = i;
    }
  }

  if(maxCount == 1){
    printf("%c\n", k + 65);
  }
  else if(maxCount > 1){
    printf("?\n");
  }

  return 0;
}
