//5622번

#include <stdio.h>
#include <string.h>

int search(char alphabet){
  if(alphabet == 'A' || alphabet == 'B' || alphabet == 'C'){
    return 3;
  }
  else if(alphabet == 'D' || alphabet == 'E' || alphabet == 'F'){
    return 4;
  }
  else if(alphabet == 'G' || alphabet == 'H' || alphabet == 'I'){
    return 5;
  }
  else if(alphabet == 'J' || alphabet == 'K' || alphabet == 'L'){
    return 6;
  }
  else if(alphabet == 'M' || alphabet == 'N' || alphabet == 'O'){
    return 7;
  }
  else if(alphabet == 'P' || alphabet == 'Q' || alphabet == 'R' || alphabet == 'S'){
    return 8;
  }
  else if(alphabet == 'T' || alphabet == 'U' || alphabet == 'V'){
    return 9;
  }
  else if(alphabet == 'W' || alphabet == 'X' || alphabet == 'Y' || alphabet == 'Z'){
    return 10;
  }
}

int main(void){
  char word[15];
  int i;
  int sum = 0;

  scanf("%s", word);

  for(i=0; i<strlen(word); i++){
    sum += search(word[i]);
  }

  printf("%d\n", sum);

  return 0;
}
