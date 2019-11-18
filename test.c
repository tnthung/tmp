void q1() {
  int odd=0, even=0;
  
  int i;
  for (i=0; i<5; i++) {
    int tmp;
    scanf("%d", &tmp);
    if (!(tmp%2)) {
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
    case 1:
    case 2:
    case 3:
      printf("Spring");
      break;
      
    case 4:
    case 5:
    case 6:
      printf("Summer");
      break;
      
    case 7:
    case 8:
    case 9:
      printf("Fall");
      break;
      
    case 10:
    case 11:
    case 12:
      printf("Winter");
      break;
      
    default:
      printf("ERROR");
  }
}

void q3() {
  int tmp, wong, li;
  
  while (tmp != 3) {
    scanf("%d", &tmp);
    
    if (tmp == 1) wong += 1;
    else if (tmp == 2) li += 1;
    else;
  }
  
  printf("王: %d\n李: %d", wong, li);
}

void q4() {
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);
  
  int h=x, l=y;
  if (h < l) {
    h = y;
    l = x;
  }
  
  int i;
  for (i=l; i<=h; i++) {
    if (!(i%z)) printf("%d\n", i);
  }
}

void q5() {
  int num, sum;
  
  for (num=1; num <= 1000; num++) {
    
    int i;
    for (i=1; i<num; i++) {
      if (!(num%i)) sum += i;
    }

    if (sum == num) printf("%d\n", num);
  }
}

void q6() {
  int num;
  scanf("%d", &num);
  
  int i, j;
  for (i=1; i<=num; i++) {
    for (j=num; j>0; j--) {
      if (i >= j) printf("%d", j);
      else printf(" ");
    }
    printf("\n");
  }
}

int main() {

  //q1();
  //q2();
  //q3();
  //q4();
  //q5();
  //q6();
  //q7();
  
  return 0;
}
