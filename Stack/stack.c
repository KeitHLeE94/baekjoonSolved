//10828번
/*
  배열로 스택 구현하는 기본적인 문제.
  간만에 짜려니까 스택도 못짜겠어서 구글좀 찾아보면서 했다...
  다시한번 꾸준히 달릴 것이다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top = -1;
int stack[10000];

void push(int num){
  stack[++top] = num;
}

void pop(void){
  if(top < 0){
    printf("-1\n");
  }
  else{
    printf("%d\n", stack[top--]);
  }
}

int main(void){
  int N, i;

  scanf("%d", &N);

  for(i=0; i<=N; i++){
    char order[20];
    fgets(order, 20, stdin);

    if(strncmp(order, "push", 4) == 0){
      strtok(order, " ");
      int num = atoi(strtok(NULL, " "));
      push(num);
    }
    else if(strncmp(order, "pop", 3) == 0){
      pop();
    }
    else if(strncmp(order, "size", 4) == 0){
      printf("%d\n", top + 1);
    }
    else if(strncmp(order, "empty", 5) == 0){
      if(top < 0){
        printf("1\n");
      }
      else{
        printf("0\n");
      }
    }
    else if(strncmp(order, "top", 3) == 0){
      if(top < 0){
        printf("-1\n");
      }
      else{
        printf("%d\n", stack[top]);
      }
    }
  }

  return 0;
}
