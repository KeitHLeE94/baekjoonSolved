//
// Created by Keith_Lee on 2018. 9. 21..
//
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int A, B, T;
char mode[4] = {'D', 'S', 'L', 'R'};

int change(char mode, int num){
    int result = 0;
    int temp = num;
    int d4 = temp % 10;
    temp /= 10;
    int d3 = temp % 10;
    temp /= 10;
    int d2 = temp % 10;
    temp /= 10;
    int d1 = temp % 10;

    switch(mode){
        case 'D':
            result = (num*2) % 10000;
            break;
        case 'S':
            num -= 1;
            if(num == 0){
                result = 9999;
            }
            else{
                result = num;
            }
            break;
        case 'L':
            result = 1000 * d2 + 100 * d3 + 10 * d4 + d1;
            break;
        case 'R':
            result = 1000 * d4 + 100 * d1 + 10 * d2 + d3;
            break;
    }

    return result;
}

int main(){
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> A >> B;

        bool check[10000] = {false, };
        string dist[10000] = {"", };
        queue<int> Queue;

        Queue.push(A);
        check[A] = true;
        dist[A] = "";

        string answer;
        int flag = 1;

        while(!Queue.empty()){
            int current = Queue.front();
            Queue.pop();

            for(int i=0; i<4; i++){
                int next = change(mode[i], current);

                if(!check[next]){
                    Queue.push(next);
                    check[next] = true;
                    dist[next] = dist[current] + mode[i];
                }

                if(next == B){
                    answer = dist[next];
                    flag = 0;
                    break;
                }
            }

            if(flag == 0){
                cout << answer << '\n';
                break;
            }
        }
    }

    return 0;
}
