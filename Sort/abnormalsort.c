//10989번
/*
  단순 퀵소트로 풀었다가 바로 틀렸다.
  주어지는 수의 갯수가 매우 많기에 다른 방법이 필요했는데
  주어지는 수가 10000보다 작거나 같다는 점에서 배열을 만들고 그 배열에 숫자의 출현 빈도를 입력한 다음
  그 빈도만큼 반복하여 인덱스를 출력하는 방식으로 풀면 된다고 한다.
  구글링해서 참조했지만, 내용은 이해하고 넘어간다.
*/

#include <stdio.h>

int main(void){
  int N;
  int i, j;
  int input;
  int temp[10001] = {0};

  scanf("%d", &N);

  for(i=0; i<N; i++){
    scanf("%d", &input);
    temp[input]++;
  }

  for(i=1; i<=10000; i++){
    if(temp[i] != 0){
      for(j=0; j<temp[i]; j++){
        printf("%d\n", i);
      }
    }
  }

  return 0;
}
