//1316번
/*
  변수 check의 초기화 위치, 초기값 설정때문에 2번 틀렸다가 맞혔다.
*/

#include <stdio.h>
#include <string.h>

int main(void){
  int N;
  char word[100];
  int i, j, k, l;
  int count = 0;

  scanf("%d", &N);

  for(i=0; i<N; i++){
    int check = 1;
    scanf("%s", word);

    for(j=0; j<strlen(word); j++){
      for(k=strlen(word)-1; k>=0; k--){
        if(word[j] == word[k]){
          int gap = k - j;
          if(gap > 1){
            for(l=k-1; l>j; l--){
              if(word[l] != word[k]){
                check = 0;
              }
            }
          }
        }
      }
    }

    if(check != 0){
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}
