//
// Created by Keith_Lee on 2018. 9. 21..
//
#include <iostream>
#include <queue>

using namespace std;

int T, A, B;
bool prime[10000] = {false, };
queue<int> Queue;

int change(int num, int index, int toChange){
    int place1 = num % 10; //1의자리수
    num /= 10;
    int place2 = num % 10; //10의자리수
    num /= 10;
    int place3 = num % 10; //100의자리수
    num /= 10;
    int place4 = num % 10; //1000의자리수

    switch(index){
        case 1:
            place1 = toChange;
            break;
        case 2:
            place2 = toChange;
            break;
        case 3:
            place3 = toChange;
            break;
        case 4:
            place4 = toChange;
            break;
    }

    int result = place1 + place2 * 10 + place3 * 100 + place4 * 1000;

    return result;
}

int main(){
    for(int i=1; i<10000; i++){
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    prime[4] = false;
    prime[6] = false;
    prime[8] = false;
    prime[9] = false;

    for(int i=10; i<10000; i++){
        for(int j=2; j<i/2; j++){
            if(i % j == 0){
                prime[i] = false;
            }
        }
    }

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> A >> B;

        int dist[10000] = {0, };
        bool check[10000] = {false, };

        dist[A] = 0;
        Queue.push(A);
        check[A] = true;

        while(!Queue.empty()){
            int current = Queue.front();
            Queue.pop();

            for(int j=1; j<5; j++){
                for(int k=0; k<10; k++){
                    int next = change(current, j, k);

                    if(prime[next] && !check[next] && next >= 1000){
                        Queue.push(next);
                        check[next] = true;
                        dist[next] = dist[current] + 1;
                    }
                }
            }
        }

        cout << dist[B] << '\n';
    }

    return 0;
}