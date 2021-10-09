#include<iostream>
#include<string>
int main(){
   std::string a = "Hello";
   std::cout << &a << std::endl;
   a[0] = 'J';
   std::cout << &a << std::endl;
   std::cout <<  a << std::endl;

     return 0;

}