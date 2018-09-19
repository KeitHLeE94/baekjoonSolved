#include <iostream>

using namespace std;

int main() {
    int E, S, M;

    cin >> E;
    cin >> S;
    cin >> M;

    for(int i=1; i<7981; i++){
        int e = i % 15;
        int s = i % 28;
        int m = i % 19;

        if(e == 0){
            e += 15;
        }
        if(s == 0){
            s += 28;
        }
        if(m == 0){
            m += 19;
        }

        if(e == E && s == S && m == M){
            cout << i;
            break;
        }
    }
    return 0;
}