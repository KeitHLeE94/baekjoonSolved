//2577번
/*
  C에서는 itoa함수가 표준으로 정의되어 있지 않다는 것을 처음 알게 되었다.
  내 답대로 해도 풀리긴 하는데, 다른사람들것들 찾아보니
  mod 10 연산을 하고, 곱한 결과를 10으로 나눠주는 방식으로 반복하는 방법도 있더라.
*/

#include <stdio.h>
#include <string.h>

char* itoa(int val, char * buf, int radix) {

	char* p = buf;

	while(val) {

		if(radix <= 10)
			*p++ = (val % radix) + '0';

		else {
			int t = val % radix;
			if (t <= 9)
				*p++ = t + '0';
			else
				*p++ = t - 10 + 'a';
		}

		val /= radix;
	}

	*p = '\0';
	//reverse(buf);

	return buf;
}

int main(void){
  int A, B, C;
  int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
  int i;

  scanf("%d%d%d", &A, &B, &C);

  int result = A * B * C;
  char check[10];

  itoa(result, check, 10);

  for(i=0; i<strlen(check); i++){
    if(check[i] == '0'){
      zero++;
    }
    else if(check[i] == '1'){
      one++;
    }
    else if(check[i] == '2'){
      two++;
    }
    else if(check[i] == '3'){
      three++;
    }
    else if(check[i] == '4'){
      four++;
    }
    else if(check[i] == '5'){
      five++;
    }
    else if(check[i] == '6'){
      six++;
    }
    else if(check[i] == '7'){
      seven++;
    }
    else if(check[i] == '8'){
      eight++;
    }
    else if(check[i] == '9'){
      nine++;
    }
  }

  printf("%d\n", zero);
  printf("%d\n", one);
  printf("%d\n", two);
  printf("%d\n", three);
  printf("%d\n", four);
  printf("%d\n", five);
  printf("%d\n", six);
  printf("%d\n", seven);
  printf("%d\n", eight);
  printf("%d\n", nine);

  return 0;
}
