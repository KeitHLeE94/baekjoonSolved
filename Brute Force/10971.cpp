//
// Created by Keith_Lee on 2018. 9. 20..
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int map[20][20];

int main(){
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> map[i][j];
        }
    }

    vector<int> cost(N);
    for(int i=0; i<N; i++){
        cost[i] = i;
    }

    int answer = 2147483647;

    do{
        bool available = true;
        int result = 0;

        for(int i=0; i<N-1; i++){
            if(map[cost[i]][cost[i+1]] == 0){
                available = false;
            }
            else{
                result += map[cost[i]][cost[i+1]];
            }
        }

        if(available && map[cost[N-1]][cost[0]] != 0){
            result += map[cost[N-1]][cost[0]];
            if(answer > result){
                answer = result;
            }
        }
    } while(next_permutation(cost.begin()+1, cost.end()));

    cout << answer;

    return 0;
}