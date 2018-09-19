//
// Created by Keith_Lee on 2018. 9. 20..
//
#include <iostream>

using namespace std;

bool broken[10];

int possible(int channel){
    int len = 0;

    if(channel == 0){
        if(broken[0]){
            return 0;
        }
        else{
            return 1;
        }
    }

    while(channel > 0){
        if(broken[channel % 10]){
            return 0;
        }
        len++;
        channel /= 10;
    }

    return len;
}

int main(){
    int N, M;
    cin >> N;
    cin >> M;

    int brokenIndex;
    for(int i=0; i<M; i++){
        cin >> brokenIndex;
        broken[brokenIndex] = true;
    }

    int answer = N - 100;
    if(answer < 0){
        answer = -answer;
    }

    for(int i=0; i<1000000; i++){
        int len = possible(i);

        if(len > 0){
            int press = i - N;
            if(press < 0){
                press = -press;
            }
            if(answer > len + press){
                answer = len + press;
            }
        }
    }

    cout << answer;
    return 0;
}