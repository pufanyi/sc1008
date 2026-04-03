#include <iostream>

class A {
 private:
  int a;

 public:
  A(int a = 0) : a(a) {}

  int getA() const { return a; }
};

int main() {
  const A a(0);
  std::cout << a.getA() << std::endl;
  return 0;
}
