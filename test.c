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

int main() {

  return 0;
}
