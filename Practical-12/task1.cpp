#include <iostream>
class Parent {
  public:
    void msg() { std::cout << "This is the method of parent class \n"; }
};
class Child : public Parent {
  public:
    void dis(){
        msg(); // calling parent class method within child class
        std::cout << "This is a method of child1 class\n";
    }
};

int main() { 
    
    Child obj;
    obj.dis();
    
    obj.msg(); // calling Parent class method from child class
    
    return 0; }