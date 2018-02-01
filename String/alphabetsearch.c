//10809번

#include <stdio.h>
#include <string.h>

int main(void){
  char S[100];
  char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int i, j;
  int result[26];

  scanf("%s", S);

  for(i=0; i<26; i++){
    result[i] = -1;
  }

  for(i=0; i<strlen(S); i++){
    for(j=0; j<26; j++){
      if(alphabet[j] == S[i] && result[j] == -1){
        result[j] = i;
      }
    }
  }

  for(i=0; i<26; i++){
    printf("%d ", result[i]);
  }
  printf("\n");

  return 0;
}
