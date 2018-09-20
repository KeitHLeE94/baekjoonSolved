//
// Created by Keith_Lee on 2018. 9. 20..
//
// 출력예시에서 마지막 숫자가 바뀐다 == DFS로 풀면 된다.
#include <iostream>

using namespace std;

int num[50], k, Stack[6], sp=0;

void push(int num){
    Stack[sp++] = num;
}

int pop(){
    return Stack[sp--];
}

void select(int current){
    if(sp == 6){
        for(int i=0; i<6; i++){
            cout << Stack[i] << " ";
        }
        cout << '\n';
    }
    else{
        for(int i=current; i<k; i++){
            push(num[i]);
            select(i+1);
            pop();
        }
    }
}

int main(){
    while(true){
        cin >> k;

        if(!k){
            break;
        }
        else{
            for(int i=0; i<k; i++){
                cin >> num[i];
            }
            select(0);
            cout << '\n';
        }
    }

    return 0;
}