//
// Created by Keith_Lee on 2018. 9. 21..
//
#include <iostream>
#include <map>
#include <string>
#include <queue>

using namespace std;

int moveX[4] = {0, 0, 1, -1};
int moveY[4] = {1, -1, 0, 0};

int main(){
    int start = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int temp;
            cin >> temp;
            if(temp == 0){
                temp = 9;
            }
            start = start * 10 + temp;
        }
    }

    queue<int> Queue;
    map<int, int> dist;

    dist[start] = 0;
    Queue.push(start);

    while(!Queue.empty()){
        int current_num = Queue.front();
        string current = to_string(current_num);
        Queue.pop();

        int z = current.find('9');
        int x = z/3;
        int y = z%3;

        for(int i=0; i<4; i++){
            int nextX = x + moveX[i];
            int nextY = y + moveY[i];

            if(nextX >= 0 && nextX < 3 && nextY >= 0 && nextY < 3){
                string next = current;
                swap(next[x*3 + y], next[nextX*3 + nextY]);
                int next_num = stoi(next);
                if(dist.count(next_num) == 0){
                    dist[next_num] = dist[current_num] + 1;
                    Queue.push(next_num);
                }
            }
        }
    }

    if(dist.count(123456789) == 0){
        cout << -1 << '\n';
    }
    else{
        cout << dist[123456789] << '\n';
    }

    return 0;
}