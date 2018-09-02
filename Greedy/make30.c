//10610번
/*
  처음 제출했을때 틀린부분 고치고 함수 사용을 바꿔봤는데
  시간 초과가 뜬다. 아마 결과는 맞게 나올 것임.
  어떻게 보완하면 좋을지는 도저히 안떠오른다ㅠㅠㅠㅠ
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zeroCount = 0;

void delChar(char* buf, char* dest, char ch){
  int i;

  while(*buf){
    if(*buf == ch){
      buf++;
      zeroCount++;
      continue;
    }
    *dest++ = *buf++;
  }
}

int compare(const void* first, const void* second){
  return strcmp((char*)second, (char*)first);
}

int main(void){
  char num[100000];
  int i = 0;

  scanf("%s", num);

  int checksum = 0;
  int charCount = strlen(num);

  while(num[i] != '\0'){
    char temp = num[i];
    checksum += atoi(&temp);
    i++;
  }

  char result[charCount];

  if((checksum % 3 == 0) && (strchr(num, '0') != NULL)){
    delChar(num, result, '0');
    qsort(result, charCount - zeroCount, 1, compare);
    for(i=(charCount - zeroCount); i<charCount; i++){
      result[i] = '0';
    }
    result[i] = '\0';
    printf("%s\n", result);
  }
  else{
    printf("-1\n");
  }

  return 0;
}
