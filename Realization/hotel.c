//10250번

#include <stdio.h>

int room(int height, int width, int num){
  int i;
  int flr = 100;
  int result = 0;
  int temp = num;

  if(temp > height){
    for(i=1; i<=width; i++){
      temp -= height;
      if(temp > 0 && temp <= height){
        break;
      }
    }
    result = flr * temp + (i+1);
  }
  else{
    result = flr * temp + 1;
  }

  return result;
}

int main(void){
  int T;
  int H, W, N;
  int i;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d%d", &H, &W, &N);
    printf("%d\n", room(H, W, N));
  }

  return 0;
}
