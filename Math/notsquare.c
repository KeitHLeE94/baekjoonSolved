//1016번

#include <stdio.h>
#include <math.h>

long long min, max;
long long divider[max+1];

void isprime(void){
  long long i, j;
  for(i=1; i<=1000000; i++){
    for(j=2*i; j<=max; j+=i){
      n[j] = 0;
    }
  }
  for(i=1; i<=max; i++){
    if(n[i] == 1){
      divider[i] = i;
    }
  }
}

int main(void){
  long long i;

  scanf("%d%d", &min, &max);

  long long temp[max+1];

  for(i=1; i<=max; i++){
    temp[i] = 1;
  }

  for(i=min; i<=max; i++){
    for(j=1; j<=[max+1])
  }
}
