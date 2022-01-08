#include <iostream>
class A {
  public:
    int a = 10;
};
class B : virtual public A { // we inherit class A virtually so to avoid ambiguity in our code
  public:
    int b = 11 ;
};
class C : public virtual A {
  public:
    int b = 34;
    int c = 12;
};
class D : public B, public C {
  public:
    int d = 13;
};
int main() { 
    D obj;
    std::cout << obj.a << std::endl ;
   // obj.b;  this causes ambiguity
    // to avoid this we use ::
    std :: cout << obj.B::b; 
     
    return 0; }