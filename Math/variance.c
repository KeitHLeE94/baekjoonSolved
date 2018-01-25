//1009번
/*
  그냥 나머지 구하는 문제인줄 알았더니...만
  오버플로우까지 고려해야되는 생각보다 복잡한 문제였다.
  암호학 프로젝트(RSA 프로젝트)에서 사용한 오버플로우 없는 연산 함수를 사용.
*/

#include <stdio.h>
#include <math.h>

unsigned long long addmod(unsigned long long a, unsigned long long b, unsigned long long n)
{
    unsigned long long amod = a % n;
    unsigned long long bmod = b % n;

    if (amod == 0) {
        return bmod;
    }
    if (bmod == 0) {
        return amod;
    }
    if (amod + bmod <= amod) {
        return (amod - (n - bmod)) % n;
    }

    return (amod + bmod) % n;
}

unsigned long long mulmod(unsigned long long a, unsigned long long b, unsigned long long n)
{
    unsigned long long amod = a % n;
    unsigned long long bmod = b % n;

    if (amod == 0 || bmod == 0) {
        return 0;
    }
    if (amod == 1) {
        return bmod;
    }
    if (bmod == 1) {
        return amod;
    }

    unsigned long long asquared = mulmod(amod, bmod/2, n);
    if ((bmod & 1) == 0) {
        return addmod(asquared, asquared, n);
    }
    return addmod(amod, addmod(asquared, asquared, n), n);
}

unsigned sqmod(unsigned a, unsigned n)
{
    unsigned b;
    unsigned sum = 0;

    // Make sure original number is less than n
    a = a % n;

    // Use double and add algorithm to calculate a*a mod n
    for (b = a; b != 0; b >>= 1) {
        if (b & 1) {
            sum = addmod(sum, a, n);
        }
        a = addmod(a, a, n);
    }
    return sum;
}

unsigned long long powermod(unsigned long long a, unsigned long long d, unsigned long long n)
{
    if (d == 0) {
        return 1;
    }
    unsigned long long amod = a % n;
    if (d == 1) {
        return amod;
    }
    unsigned long long h = powermod(amod, d/2, n);
    if ((d & 1) == 0) {
        return sqmod(h, n);
    }
    return mulmod(amod, sqmod(h, n), n);
}

int main(void){
  int T;
  int a, b;
  int i;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d%d", &a, &b);

    unsigned int result = powermod(a, b, 10);

    if(result == 0){
      result = 10;
    }

    printf("%d\n", result);
  }

  return 0;
}
