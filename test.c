#include <stdio.h>
#include <stdlib.h>

void q1() {
  int odd, even;
  
  int i;
  for (i=0; i<5; i++) {
    int tmp;
    scanf("%d", &tmp);
    if (tmp%2) {
      even += 1;
    }
    else {
      odd += 1;
    }
  }
  
  printf("Even: %d\nOdd : %d", even, odd);
}

void q2() {
  int m;
  scanf("%d", &m);
  
  switch (m) {
    case 1, 2, 3:
      printf("Spring");
      break;
      
    case 4, 5, 6:
      printf("Summer");
      break;
      
    case 7, 8, 9:
      printf("Fall");
      break;
      
    case 10, 11, 12:
      printf("Winter");
      break;
      
    default:
      printf("ERROR");
  }
}

int main() {

  //q1();
  //q2();
  
  return 0;
}
