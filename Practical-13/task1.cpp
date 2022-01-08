#include <iostream>

// the float method cannot be called from child due to overriding
#define print(n) std::cout << n << "\n";
class Base {
public:
  int add(int a, int b) { return a + b; };
  float add(float a, float b) { return a + b; };
};
class Sub : public Base {
public:
  int add(int a, int b) { return a + b + 10; };
};
int main() {
  Base a;
  Sub b;

  std::cout << a.add(1, 2) << "\n";
  std::cout << a.add(1.4f, 2.4f) << "\n";
  std::cout << b.add(1, 2) << "\n";
  std::cout << b.add(1.3f, 0.6f) << "\n"; // this will not call Base float method

  return 0;
}