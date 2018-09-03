//
// Created by Keith_Lee on 2018. 9. 3..
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

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

    vector<int> a(n);
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    for(int i=0; i<n; i++){
        cout << a[i] << ' ';
    }
    cout << '\n';

    for(int i=0; i<factorial(n); i++){
        if(next_permutation(a.begin(), a.end())){
            for(int j=0; j<n; j++){
                cout << a[j] << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}