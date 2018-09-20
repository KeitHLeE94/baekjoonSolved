//
// Created by Keith_Lee on 2018. 9. 21..
//
#include <iostream>
#include <queue>

using namespace std;

const int MAX = 200000;
bool check[MAX+1];
int dist[MAX+1];
queue<int> Queue;

int N, K;

int main(){
    cin >> N;
    cin >> K;
    check[N] = true;
    dist[N] = 0;
    Queue.push(N);

    while(!Queue.empty()){
        int current = Queue.front();
        Queue.pop();

        if(current-1 >= 0){
            if(!check[current-1]){
                Queue.push(current-1);
                check[current-1] = true;
                dist[current-1] = dist[current] + 1;
            }
        }
        if(current+1 < MAX){
            if(!check[current+1]){
                Queue.push(current+1);
                check[current+1] = true;
                dist[current+1] = dist[current] + 1;
            }
        }
        if(current*2 < MAX){
            if(!check[current*2]){
                Queue.push(current*2);
                check[current*2] = true;
                dist[current*2] = dist[current] + 1;
            }
        }
    }

    cout << dist[K] << '\n';

    return 0;
}