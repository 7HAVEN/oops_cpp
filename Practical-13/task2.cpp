#include <iostream>
class Base {
public:
  virtual int add(int a, int b) { return a + b; };
  virtual void show() = 0;
};
class Sub : public Base {
public:
  int add(int a, int b) { return a + b + 10; };
  void show(){
    std::cout <<  "This is sub class\n";
  }
};
int main() {
//   Base a;
  Sub b;
  Base *p;
  p = &b; 
  std::cout << p->add(2,3) << "\n";
  p->show();

  return 0;
}