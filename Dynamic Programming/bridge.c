//1010번
/*
  어쩌네 저쩌네 해도
  결국 조합의 결과를 출력하라는거였다.
  재귀로 했을때 시간초과 나서
  dp로 다시.
*/

#include <stdio.h>

int main(void){
  int T;
  int N, M;
  int i, j, k;
  long long result;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d", &N, &M);

    unsigned long long combination[31][31] = {};

    combination[1][1] = 1;
    for(j = 2; j <= M+1; j++){
      for(k = 1; k <= N+1; k++){
        combination[j][k] = combination[j - 1][k - 1] + combination[j - 1][k];
      }
    }

    printf("%lld\n", combination[M+1][N+1]);
  }

  return 0;
}
