//
// Created by Keith_Lee on 2018. 9. 20..
//
// BFS == 큐 사용하여 구현!!!
#include <iostream>
#include <queue>

using namespace std;

int N, M, V;
int map[1001][1001] = {0, };
bool BFS_visit[1001];
queue<int> Queue;

void BFS(int current){
    Queue.push(current);
    BFS_visit[current] = true;

    while(!Queue.empty()){
        int temp = Queue.front();
        Queue.pop();
        cout << temp << " ";

        for(int i=1; i<=N; i++){
            if(!BFS_visit[i]){
                Queue.push(i);
                BFS_visit[i] = true;
            }
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

    BFS(V);
    cout << '\n';

    return 0;
}