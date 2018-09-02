//1068번
/*
  못풀겠어서 구글에서 찾아서 풀었는데도 틀렸음.
  일단 보통 아는 트리형태로 구현해서 푸는건 아닌것같다.
*/

#include <stdio.h>

int N, delete;
int count = 1;
int tree[50][2];

void kick(int num){
  if(num == delete){
    return;
  }
  if((tree[num][0] == -2 || tree[num][0] == delete) && (tree[num][1] == -2 || tree[num][1] == delete)){
    count++;
    return;
  }
  if(tree[num][0] != -2){
    kick(tree[num][0]);
  }
  if(tree[num][1] != -2){
    kick(tree[num][1]);
  }
}

int main(void){
  int i, parent;
  int temp;

  scanf("%d", &N);

  for(i=0; i<50; i++){
    tree[i][0] = tree[i][1] = -2;
  }

  for(i=0; i<N; i++){
    scanf("%d", &parent);
    if(parent == -1){
      temp = i;
    }
    else if(tree[i][0] == -2){
      tree[parent][0] = i;
    }
    else{
      tree[parent][1] = i;
    }
  }

  scanf("%d", &delete);

  kick(temp);

  printf("%d\n", count);

  return 0;
}
