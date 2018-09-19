//
// Created by Keith_Lee on 2018. 9. 20..
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int calculate(vector<int> &a){
    int result = 0;

    for(int i=1; i<a.size(); i++){
        result += abs(a[i] - a[i-1]);
    }

    return result;
}

int main(){
    int N;
    cin >> N;

    vector<int> a(N);
    for(int i=0; i<N; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int answer = 0;

    do{
        int temp = calculate(a);
        answer = max(answer, temp);
    } while(next_permutation(a.begin(), a.end()));

    cout << answer;

    return 0;
}