// program to overload  < operator

#include<iostream> 

class Test{
    public:
        int a;
    Test(int a){
        this->a = a;
    }
    friend bool operator <(Test a,Test b);
};

bool operator <(Test obj1,Test obj2){
    return obj1.a < obj2.a;
}
int main(){
    Test  ob(333);
    Test  ob2(34);
    std::cout << (ob < ob2 ? "yes": "no");


    return 0;
}