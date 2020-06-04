#include <iostream>


struct time{
  int h, m, s;
};

void f1(struct time t){
  std::cout << t.h << t.m << t.s << std::endl;
}

struct time f2(struct time t1, struct time t2){
  struct time tmp;
  
  if (t1.h < t2.h) {
    tmp.h = t2.h - t1.h;
    tmp.m = t2.m - t1.m;
    tmp.s = t2.s - t1.s;

  }
  else {
    tmp.h = t1.h - t2.h;
    tmp.m = t1.m - t2.m;
    tmp.s = t1.s - t2.s;

  }

  while (tmp.m < 0) {
    tmp.h -= 1;
    tmp.m += 60;

  }

  while (tmp.s < 0) {
    tmp.m -= 1;
    tmp.s += 60;
  }

  return tmp;
}

int main(){
  struct time t1, t2;

  std::cout << "H: ";
  std::cin >> t1.h;

  std::cout << "M: ";
  std::cin >> t1.m;

  std::cout << "S: ";
  std::cin >> t1.s;

  std::cout << "H: ";
  std::cin >> t2.h;

  std::cout << "M: ";
  std::cin >> t2.m;

  std::cout << "S: ";
  std::cin >> t2.s;
  
  f1(t1);
  f1(t2);

  f1(f2(t1, t2));

  system("pause");
}
