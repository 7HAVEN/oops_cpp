#include <iostream>
class Parent {
  public:
    int x;
    Parent(int x) {
        this->x = x;
        std::cout << "1\n";
    };
    ~Parent() { std::cout << "1\n"; };
};
class Child1 : public Parent {
  public:
    Child1(int x) : Parent(x) { std::cout << "2\n"; };
    ~Child1() { std::cout << "2\n"; };
};
class Child2 : public Child1 {
  public:
    Child2(int y) : Child1(y) { std::cout << "3\n"; };
    ~Child2() { std::cout << "3\n"; };
};

int main() {
    Child2 obj(3);
    return 0;
}