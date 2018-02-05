//6064번
/*
  규칙 찾아서 푸는데까지는 성공했는데
  내가 푼대로 제출하면 시간초과 나서 구글링해보고 좀 고쳤다.
  내가 쓴 방법도 어떻게든 시간을 줄여보려 했는데 안되더라;;;
*/

#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){
  while (b != 0){
    int temp = a % b;
    a = b;
    b = temp;
  }
  return abs(a);
}

int LCM(int a, int b){
  int gcd = GCD(a, b);

  return abs((a * b) / gcd);
}

int main(void){
  int T;
  int i, j = 0, k;
  int M, N, x, y;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d%d%d", &M, &N, &x, &y);

    int result = -1;

    int temp = LCM(M, N);

    while(x != y && x <= temp){
      if(x < y){
        x += M;
      }
      else{
        y += N;
      }
    }

    if(x != y){
      printf("-1\n");
    }
    else{
      printf("%d\n", x);
    }
  }

  return 0;
}
