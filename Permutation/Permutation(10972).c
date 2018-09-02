/*
    C로는 못푸는문제인것같다.
    암만 머리굴려봐도 도저히 못풀겠어서 C++로 푼 풀이를 찾아 그거로 제출했다.
    C++을 공부해봐야 할 이유가 하나 생긴것 같다.

    ---------------------소스--------------------------------
    #include <iostream>
    #include <algorithm>
    #include <vector>
    using namespace std;
    int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        if (next_permutation(a.begin(),a.end())) {
            for (int i=0; i<n; i++) {
                cout << a[i] << ' ';
            }
        } else {
            cout << "-1";
        }
        cout << '\n';
        return 0;
    }
*/

#include <stdio.h>
#include <stdlib.h>

int N;
int i, j;
int entry;
int end = 0;

int compare_descending(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2){
        return 1;
    }
    else if(num1 > num2){
        return -1;
    }

    return 0;
}

int compare_ascending(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1 < num2){
        return -1;
    }
    else if(num1 > num2){
        return 1;
    }

    return 0;
}

int main(){
    scanf("%d", &N);
    int numList[N];
    int tempList[N];

    for(i=0; i<N; i++){
        scanf("%d", &entry);
        numList[i] = entry;
        tempList[i] = entry;
    }

    qsort(tempList, N, sizeof(int), compare_descending);

    for(i=0; i<N; i++){
        if(numList[i] == tempList[i]){
            end--;
        }
    }

    if(end == (-1) * N){
        printf("-1\n");
    }
    else{
        int temp;
        int last = numList[N-1];
        for(i=N-2; i>-1; i--){
            if(last > numList[i]){
                temp = numList[i];
                numList[i] = last;
                numList[N-1] = temp;
                int sortTempList[N-i-1];
                for(j=0; j<N-i-1; j++){
                    sortTempList[j] = numList[j+i+1];
                }
                qsort(sortTempList, N-i-1, sizeof(int), compare_ascending);
                for(j=i+1; j<N; j++){
                    numList[j] = sortTempList[j-i-1];
                }
                break;
            }
        }
        if(i < 0){
            for(i=N-2; i>-1; i--){
                if(numList[i-1] < numList[i] && numList[i] > numList[i+1]){
                    if(numList[i-1] > numList[i+1]){
                        temp = numList[i];
                        numList[i] = numList[i-1];
                        numList[i-1] = temp;
                        int sortTempList[N-i];
                        for(j=0; j<N-i; j++){
                            sortTempList[j] = numList[j+i];
                        }
                        qsort(sortTempList, N-i, sizeof(int), compare_ascending);
                        for(j=i; j<N; j++){
                            numList[j] = sortTempList[j-i];
                        }
                    }
                    else if(numList[i-1] < numList[i+1]){
                        temp = numList[i-1];
                        numList[i-1] = numList[i+1];
                        numList[i+1] = temp;
                        int sortTempList[N-i];
                        for(j=0; j<N-i; j++){
                            sortTempList[j] = numList[j+i];
                        }
                        qsort(sortTempList, N-i, sizeof(int), compare_ascending);
                        for(j=i; j<N; j++){
                            numList[j] = sortTempList[j-i];
                        }
                    }
                    break;
                }
            }
        }
        for(i=0; i<N; i++){
            printf("%d ", numList[i]);
        }
        printf("\n");
    }

    return 0;
}