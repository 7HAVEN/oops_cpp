#include<iostream>

class Base {
public:
  virtual int add(int a, int b) { return a + b; };
};
class Sub : public Base {
public:
  int add(int a, int b) { return a + b + 10; };

};

int main(){
Sub b;
  Base *p;
  p = &b; 
  std::cout << p->add(2,3) << "\n"; // this will return 5 instead of 15 due to early binding 
  // to resove this issue we use virtual key word

    return 0;
}