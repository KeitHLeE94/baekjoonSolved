//1006번
/*
  비록 틀리긴 했지만, 치열하게 고민하고 풀어낸 문제라고 할 수 있다.
  어찌어찌하여 예제대로 돌려보면 맞게는 나온다.
  한가지 의문점은, 저 아래 printf("")문을 빼버리면 답이 다르게 나온다는점이 이상하다...
*/

#include <stdio.h>

int Max(int a, int b, int c){
  int result;

  if(b < a && c < a){
    result = a;
  }
  else if(a < b && c < b){
    result = b;
  }
  else if(a < c && b < c){
    result = c;
  }
  return result;
}

int solution(int enemy[], int N, int W){
  int i, j;
  int sum = 2 * N;

  for(i=1; i<=2*N; i++){
    int max = 0;
    int compare[4] = {0, 0, 0, 0};

    if(enemy[i] >= 0){
      if(i == 1){
        if(enemy[1] + enemy[2] <= W && enemy[1] + enemy[2] > -1){
          compare[1] = enemy[1] + enemy[2];
        }
        if(enemy[1] + enemy[N] <= W && enemy[1] + enemy[N] > -1){
          compare[2] = enemy[1] + enemy[N];
        }
        if(enemy[1] + enemy[N+1] <= W && enemy[1] + enemy[N+1] > -1){
          compare[3] = enemy[1] + enemy[N+1];
        }
        max = Max(compare[1], compare[2], compare[3]);
        if(max != 0){
          if(max == compare[1]){
            enemy[2] = -10000;
            //printf("%d, 2\n", i);
          }
          else if(max == compare[2]){
            enemy[N] = -10000;
            //printf("%d, %d\n", i, N);
          }
          else if(max == compare[3]){
            enemy[N+1] = -10000;
            //printf("%d, %d\n", i, N+1);
          }
          enemy[1] = -10000;
          sum--;
        }
      }
      else if(i == N){
        if(enemy[N] + enemy[N-1] <= W && enemy[N] + enemy[N-1] > -1){
          compare[2] = enemy[N] + enemy[N-1];
        }
        if(enemy[N] + enemy[2*N] <= W && enemy[N] + enemy[2*N] > -1){
          compare[3] = enemy[N] + enemy[2*N];
        }
        max = Max(compare[1], compare[2], compare[3]);
        if(max != 0){
          if(max == compare[2]){
            enemy[N-1] = -10000;
            //printf("%d, %d\n", i, N-1);
          }
          else if(max == compare[3]){
            enemy[2*N] = -10000;
            //printf("%d, %d\n", i, 2*N);
          }
          enemy[N] = -10000;
          sum--;
        }
      }
      else if(i == N+1){
        if(enemy[N+1] + enemy[N+2] <= W && enemy[N+1] + enemy[N+2] > -1){
          compare[2] = enemy[N+1] + enemy[N+2];
        }
        if(enemy[N+1] + enemy[2*N] <= W && enemy[N+1] + enemy[2*N] > -1){
          compare[3] = enemy[N+1] + enemy[2*N];
        }
        max = Max(compare[1], compare[2], compare[3]);
        if(max != 0){
          if(max == compare[2]){
            enemy[N+2] = -10000;
            //printf("%d, %d\n", i, N+2);
          }
          else if(max == compare[3]){
            enemy[2*N] = -10000;
            //printf("%d, %d\n", i, 2*N);
          }
          enemy[N+1] = -10000;
          sum--;
        }
      }
      else{
        if(enemy[i-1] > 0 && enemy[i] + enemy[i-1] <= W){
          compare[1] = enemy[i] + enemy[i-1];
        }
        if(enemy[i+1] > 0 && enemy[i] + enemy[i+1] <= W){
          compare[2] = enemy[i] + enemy[i+1];
        }
        if(enemy[i+N] > 0 && enemy[i] + enemy[i+N] <= W){
          compare[3] = enemy[i] + enemy[i+N];
        }
        max = Max(compare[1], compare[2], compare[3]);
        if(max != 0){
          if(max == compare[1]){
            enemy[i-1] = -10000;
            //printf("%d, %d\n", i, i-1);
          }
          else if(max == compare[2]){
            enemy[i+1] = -10000;
            //printf("%d, %d\n", i, i+1);
          }
          else if(max == compare[3]){
            enemy[i+N] = -10000;
            //printf("%d, %d\n", i, i+N);
          }
          //printf("max = %d\n", max);
          enemy[i] = -10000;
          sum--;
        }
      }
      /*for(j=1; j<=N; j++){
        printf("%d ", enemy[j]);
      }*/
      //printf("\n");
      /*for(j=N+1; j<=2*N; j++){
        printf("%d ", enemy[j]);
      }*/
      printf(""); //이부분 빼면 답이 틀리게 나온다. 왜그런지는 잘 모르겠음;;;
    }
  }
  return sum;
}

int main(void){
  int T;
  int N, W;
  int i, j, k;

  scanf("%d", &T);
  for(i=0; i<T; i++){
    scanf("%d%d", &N, &W);

    int enemy[20001] = {0};

    for(j=1; j<=N; j++){
      scanf("%d", &enemy[j]);
    }
    for(j=N+1; j<=2*N; j++){
      scanf("%d", &enemy[j]);
    }

    int result = solution(enemy, N, W);

    printf("%d\n", result);
  }
}
