//8958번

#include <stdio.h>
#include <string.h>

int main(void){
  int N;
  int i, j;
  int weight = 1;

  char input[81] = {'0'};

  scanf("%d", &N);

  for(i=1; i<=N; i++){
    int result = 0;
    
    scanf("%s", input);

    for(j=0; j<strlen(input); j++){
      if(input[j-1] == 'O' && input[j] == 'O'){
        weight++;
      }
      else if(input[j-1] != 'O' && input[j] == 'O'){
        weight = 1;
      }
      else{
        weight = 0;
      }
      result += weight;
    }

    printf("%d\n", result);
  }

  return 0;
}
