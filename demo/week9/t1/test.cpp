#include <iostream>

int main() {
  int x = 3;
  int& p = x;
  p = (long)&x;
  std::cout << p << std::endl;
  return 0;
}
