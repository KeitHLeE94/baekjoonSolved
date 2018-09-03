//
// Created by Keith_Lee on 2018. 9. 3..
//

/*
 * 어렵다...
 * check라는 배열을 써서 사용한 숫자가 무엇인지까지 한번에 확인할 수 있다는 것.
 * 도대체 이런 생각을 어떻게 해내지???
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool check[21];

int factorial(int n){
    int result = 1;
    for(int i=n; i>0; i--){
        result *= i;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    int problem;
    cin >> problem;

    if(problem == 1){
        int order;
        cin >> order;

        vector<int> output(n);

        for(int i=0; i<n; i++){
            for(int j=1; j<=n; j++){
                if(check[j]){
                    continue;
                }
                if(factorial(n-i-1) < order){
                    order -= factorial(n-i-1);
                }
                else{
                    output[i] = j;
                    check[j] = true;
                    break;
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << output[i] << ' ';
        }
        cout << '\n';
    }
    else if(problem == 2){
        vector<int> input(n);
        int result = 0;

        for(int i=0; i<n; i++){
            cin >> input[i];
        }

        for(int i=0; i<n; i++){
            for(int j=1; j<input[i]; j++){
                if(!check[j]){
                    result += factorial(n-i-1);
                }
            }
            check[input[i]] = true;
        }

        cout << result+1 << '\n';
    }

    return 0;
}