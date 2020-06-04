#include <iostream>


class time
{
public:
  int h, m, s;
  
  time(int h, int m, int s)
  : h(h), m(m), s(s)
  {}

  time()
  : h(0), m(0), s(0)
  {

  }

  void f1()
  {
    std::cout << h << ":" << m << ":" << s << std::endl;
  }

  time f2(time t2)
  {
    time tmp;
  
    if (h < t2.h) {
      tmp.h = t2.h - h;
      tmp.m = t2.m - m;
      tmp.s = t2.s - s;

    }
    else {
      tmp.h = h - t2.h;
      tmp.m = m - t2.m;
      tmp.s = s - t2.s;

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
};

int main() 
{
  time t1, t2;

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

  t1.f1();
  t2.f1();

  t1.f2(t2).f1();

  system("pause");
}
