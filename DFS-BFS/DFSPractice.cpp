//
// Created by Keith_Lee on 2018. 9. 20..
//
// DFS == 스택 사용 or 재귀 사용하여 구현!!!
#include <iostream>

using namespace std;

int N, M, V;
int map[1001][1001] = {0, };
bool DFS_visit[1001];

void DFS(int current){
    DFS_visit[current] = true;
    cout << current << " ";

    for(int i=0; i<=N; i++){
        if(map[current][i] && !DFS_visit[i]){
            DFS(i);
        }
    }
}

int main(){
    cin >> N;
    cin >> M;
    cin >> V;

    int start, end;
    for(int i=0; i<M; i++){
        cin >> start;
        cin >> end;
        map[start][end] = map[end][start] = 1;
    }

    DFS(V);
    cout << '\n';

    return 0;
}