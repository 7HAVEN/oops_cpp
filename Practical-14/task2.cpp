#include <iostream>

class Base {
  public:
    Base() { std::cout << "Base class constructor\n"; }
    ~Base() { std::cout << "Base class destructor\n"; }
    virtual int add(int a, int b) { return a + b; };
};
class Sub : public Base {
  public:
    Sub() { std::cout << "Sub class constructor\n"; }
    ~Sub() { std::cout << "Sub class destructor\n"; }

    int add(int a, int b) { return a + b + 10; };
};

int main() {
    Sub b;
    Base *p;
    p = &b;
    std::cout << p->add(2, 3) << "\n";
    return 0;
}