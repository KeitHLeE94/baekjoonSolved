//1181번

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char* a, char* b){
  char temp[50];
  temp = a;
  a = b;
  b = temp;
}

int main(void){
  int N;
  int i, j;
  int max = 0;

  scanf("%d", &N);

  char word[N][50];

  for(i=0; i<N; i++){
    scanf("%s", word[i]);
  }

  for(i=0; i<N; i++){
    for(j=0; j<N; j++){
      if(strlen(word[i]) > strlen(word[j])){
        swap(word[i], word[j]);
      }
    }
  }

  printf("\n");

  for(i=0; i<N; i++){
    printf("%s\n", word[i]);
  }

  return 0;
}
