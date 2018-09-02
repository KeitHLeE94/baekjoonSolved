//1005번
/*
  그래프 그리는거까진 하겠는데 그다음부터 아예 못풀겠다.
*/

#include <stdio.h>

int adjMat[1001][1001]={0};

int DFS(int target,int N, int time[],int DP[]){
    int max=0,result=0;
    int i,answer;


    if(DP[target]!=0){
        return DP[target];
    }

    for(i=1;i<=N;i++){
        if(adjMat[i][target]==1){
            result=DFS(i,N,time,DP);
            if(max<result){
                max=result;
            }
        }
    }

    answer=time[target]+max;
    if(DP[target]<answer){
        DP[target]=answer;
    }
    return answer;
}

int main(){


    int T,N,K,i,j,x,y,w;
    int time[1001]={0};
    int DP[1001]={0};

    scanf("%d",&T);

    for(i=0;i<T;i++){
        scanf("%d%d",&N,&K);

        for(j=0;j<=N;j++){ //DP 초기화
            DP[j]=0;
        }

        for(j=0;j<=N;j++){
            for(x=0;x<=N;x++){
                adjMat[j][x]=0;
            }
        }


        for(j=1;j<=N;j++){
            scanf("%d",&time[j]);
        }

        for(j=0;j<K;j++){
            scanf("%d%d",&x,&y);
            adjMat[x][y]=1;
        }

        scanf("%d",&w);

        printf("%d\n",DFS(w,N,time,DP));

    }



    return 0;
}
