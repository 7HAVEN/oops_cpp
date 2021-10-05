#include<iostream>
namespace First{
    int add(int a ,int b){

        return a+b;
    }
}
namespace Second{
    float add(float a,float b){

        return a+b;
    }
}

int main(){
    std::cout << "using first namespace: " << add(3,2) << std::endl;
    std::cout << "using second namespace: "<< add(3.03f,2.31f) << std::endl;
    

    return EXIT_SUCCESS;
}