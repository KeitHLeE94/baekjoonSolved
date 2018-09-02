//2675번

#include <stdio.h>
#include <string.h>

int main(void){
  int T;
  int i, j, k;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    int R;
    char S[20];

    scanf("%d", &R);
    scanf("%s", S);

    for(j=0; j<strlen(S); j++){
      for(k=0; k<R; k++){
        printf("%c", S[j]);
      }
    }
    printf("\n");
  }

  return 0;
}
