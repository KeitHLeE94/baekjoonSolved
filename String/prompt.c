//1032번
/*
  네트워크, 시프 프로젝트 하며 쌓아온 파싱 경험을 토대로 풀었다.
*/

#include <stdio.h>
#include <string.h>

int main(void){
  int N;
  int i;

  scanf("%d", &N);

  char commonname[50];

  scanf("%s", commonname);

  for(i=0; i<N-1; i++){
    int j = 0;

    char filename[50];

    scanf("%s", filename);

    while(filename[j] != '\0'){
      if(commonname[j] == filename[j]){
        j++;
      }
      else{
        commonname[j] = '?';
        j++;
      }
    }
  }

  printf("%s\n", commonname);

  return 0;
}
