//1924번

#include <stdio.h>

int main(void){
  int x, y;
  int i, j;
  char week[7][3] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
  int day = 0;

  scanf("%d%d", &x, &y);

  for(i=1; i<=x; i++){
    if(i == 1){
      day = y;
    }
    else if(i == 2 || i == 4 || i == 6 || i == 8 || i == 9 || i == 11){
      day += 31;
    }
    else if(i == 3){
      day += 28;
    }
    else if(i == 5 || i == 7 || i == 10 || i == 12){
      day += 30;
    }
  }

  printf("%c%c%c\n", week[day % 7][0], week[day % 7][1], week[day % 7][2]);

  return 0;
}
