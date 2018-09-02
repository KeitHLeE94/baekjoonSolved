/*
    답안 참고해서 풀었음.
    처음에는 배열 만들어서 저장하는 방식으로 생각했는데 풀이에는 비트마스크 써서 하라고 나왔다.
    생각도 못했었는데 숫자가 20까지 주어진다는 점을 활용하여 각 자리 비트를 조작하는 방법으로 풀수 있었다.
    비트마스크 사용에 더 익숙해져야겠다...
    이런거 생각해내는사람들은 참 머리 구조가 궁금하다. 어떻게 이런걸 생각해냈지???
*/

#include <stdio.h>
#include <string.h>

int M;
int i;
char order[6];

int main(){
    scanf("%d", &M);
    int s = 0;
    int num;
    int n = 20;

    for(i=0; i<M; i++){
        scanf("%s", order);

        if(!strcmp(order, "add")){
            scanf("%d", &num);
            num--;
            s = (s | (1 << num));
        }
        else if(!strcmp(order, "remove")){
            scanf("%d", &num);
            num--;
            s = (s & ~(1 << num));
        }
        else if(!strcmp(order, "check")){
            scanf("%d", &num);
            num--;
            int check = (s & (1 << num));
            if(check){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else if(!strcmp(order, "toggle")){
            scanf("%d", &num);
            num--;
            s = (s ^ (1 << num));
        }
        else if(!strcmp(order, "all")){
            s = (1 << n) - 1;
        }
        else if(!strcmp(order, "empty")){
            s = 0;
        }
    }

    return 0;
}