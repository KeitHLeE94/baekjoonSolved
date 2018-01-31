//2920번
/*
  strcmp함수를 써보려고 했으나 입력시 공백이 들어가는게 문제가 되어 다른 방법을 찾아야 했다.
  어차피 경우도 별로 안되고 해서 if문 안에 조건 전부 처넣고 두가지 경우만 따지는 방법으로 구현.
*/

#include <stdio.h>

int main(void){
  int sound[8];
  int i;

  for(i=0; i<8; i++){
    scanf("%d", &sound[i]);
  }

  if(sound[0] == 1 && sound[1] == 2 && sound[2] == 3 && sound[3] == 4 && sound[4] == 5 && sound[5] == 6 && sound[6] == 7 && sound[7] == 8){
    printf("ascending\n");
  }
  else if(sound[0] == 8 && sound[1] == 7 && sound[2] == 6 && sound[3] == 5 && sound[4] == 4 &&  sound[5] == 3 && sound[6] == 2 && sound[7] == 1){
    printf("descending\n");
  }
  else{
    printf("mixed\n");
  }

  return 0;
}
