#include<iostream>

int main(){
    int a = 0;
    char b = 'c';
    short c = 23;
    bool  d = true;
    long e = 324;
    float f = 3.3f;
    double g = 4.3;
    long double h = 3.33;
    wchar_t i = 'Q';

    std::cout << "Size of char : " << sizeof(char) <<  std::endl;
    std::cout << "Size of int : " <<  sizeof(int)  <<  std::endl;
    std::cout << "Size of short int : " << sizeof(short int) <<  std::endl;
    std::cout << "Size of long int : " << sizeof(long int) <<  std::endl;
    std::cout << "Size of signed long int : " << sizeof(signed long int) <<  std::endl;
    std::cout << "Size of unsigned long int : " << sizeof(unsigned long int) <<  std::endl;
    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of double : " << sizeof(double) <<  std::endl;
    std::cout << "Size of wchar_t:" <<  sizeof(wchar_t) << std::endl;
    return 0;
}