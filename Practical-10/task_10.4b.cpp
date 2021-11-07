// program to add two objects by overloading + operator
#include<iostream>

class Test{
    public:
        int a;
    Test(int a){
        this->a = a;
    }
    Test operator +( Test obj){
        return Test(obj.a+ this->a);
    }
};



int main(){
    Test a(10),b(30);
    Test c = a + b;
    std::cout << c.a;

    return 0;
}