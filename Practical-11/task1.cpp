// task 11.1
#include <iostream>

class Parent {
  public:
    const int x = 12;
    void display() { std::cout << "this is the method of the parent class \n"; }
};

class Child : public Parent {
  public:
    int y;
    void display2() {
        std::cout << "This the method of child class";
        std::cout
            << "parent x = " << x
            << "\n"; // calling parent class method without making an object
    }
};

int main() {

    Child obj;
    obj.display();  // calling the method of parent class from child class
    obj.display2(); // print value of x from parent class from child class
                    // without making an object

    return 0;
}